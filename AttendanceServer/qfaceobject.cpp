#include "qfaceobject.h"
#include <QDebug>
QFaceObject::QFaceObject(QObject *parent) : QObject(parent)
{
    seeta::ModelSetting  FDmode("D:\\Software\\OpenCV\\SeetaFace\\bin\\model\\fd_2_00.dat",seeta::ModelSetting::CPU,0);
    seeta::ModelSetting  PDmode("D:\\Software\\OpenCV\\S"
                                "eetaFace\\bin\\model\\pd_2_00_pts5.dat",seeta::ModelSetting::CPU,0);
    seeta::ModelSetting  FRDmode("D:\\Software\\OpenCV\\SeetaFace\\bin\\model\\fr_2_10.dat",seeta::ModelSetting::CPU,0);

    this->fengineptr=new seeta::FaceEngine(FDmode,PDmode,FRDmode);

    //导入已有数据库
    this->fengineptr->Load("./face.db");
}

QFaceObject::~QFaceObject()
{
    delete fengineptr;
}

int64_t QFaceObject::face_register(cv::Mat &faceImage)
{
    //把opencv的Mat转换为seetaface
    SeetaImageData simage;
    simage.data=faceImage.data;
    simage.width=faceImage.cols;
    simage.height=faceImage.rows;
    simage.channels=faceImage.channels();
    int64_t faceid=this->fengineptr->Register(simage);
    if(faceid>=0){

        fengineptr->Save("./face.db");
    }
    return faceid;
}

int QFaceObject::face_query(cv::Mat &faceImage)
{
    SeetaImageData simage;
    simage.data=faceImage.data;
    simage.width=faceImage.cols;
    simage.height=faceImage.rows;
    simage.channels=faceImage.channels();
    float similarity=0;
    int64_t faceid = fengineptr->Query(simage,&similarity);
    qDebug()<<"查询"<<faceid<<similarity;
    if(similarity > 0.7)
    {
        emit send_faceid(faceid);
    }else
    {
        emit send_faceid(-1);
    }

    return faceid;
}

