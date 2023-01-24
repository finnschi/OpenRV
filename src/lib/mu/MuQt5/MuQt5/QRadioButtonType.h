//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#ifndef __MuQt5__QRadioButtonType__h__
#define __MuQt5__QRadioButtonType__h__
#include <iostream>
#include <Mu/Class.h>
#include <Mu/MuProcess.h>
#include <QtCore/QtCore>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtNetwork/QtNetwork>
#include <QtWebEngine/QtWebEngine>
#include <QtWebEngineWidgets/QtWebEngineWidgets>
#include <QtQml/QtQml>
#include <QtQuick/QtQuick>
#include <QtQuickWidgets/QtQuickWidgets>
#include <QtSvg/QtSvg>
#include <MuQt5/Bridge.h>

namespace Mu {
class MuQt_QRadioButton;

//
//  NOTE: file generated by qt2mu.py
//

class QRadioButtonType : public Class
{
  public:

    typedef MuQt_QRadioButton MuQtType;
    typedef QRadioButton QtType;

    //
    //  Constructors
    //

    QRadioButtonType(Context* context, 
           const char* name,
           Class* superClass = 0,
           Class* superClass2 = 0);

    virtual ~QRadioButtonType();

    static bool isInheritable() { return true; }
    static inline ClassInstance* cachedInstance(const MuQtType*);

    //
    //  Class API
    //

    virtual void load();

    MemberFunction* _func[16];
};

// Inheritable object

class MuQt_QRadioButton : public QRadioButton
{
  public:
    virtual ~MuQt_QRadioButton();
    MuQt_QRadioButton(Pointer muobj, const CallEnvironment*, QWidget * parent) ;
    MuQt_QRadioButton(Pointer muobj, const CallEnvironment*, const QString & text, QWidget * parent) ;
    virtual QSize minimumSizeHint() const;
    virtual QSize sizeHint() const;
  protected:
    virtual bool event(QEvent * e) ;
    virtual bool hitButton(const QPoint & pos) const;
    virtual void mouseMoveEvent(QMouseEvent * e) ;
    virtual void paintEvent(QPaintEvent * _p14) ;
    virtual void checkStateSet() ;
    virtual void nextCheckState() ;
    virtual void changeEvent(QEvent * e) ;
    virtual void focusInEvent(QFocusEvent * e) ;
    virtual void focusOutEvent(QFocusEvent * e) ;
    virtual void keyPressEvent(QKeyEvent * e) ;
    virtual void keyReleaseEvent(QKeyEvent * e) ;
    virtual void mousePressEvent(QMouseEvent * e) ;
    virtual void mouseReleaseEvent(QMouseEvent * e) ;
    virtual void timerEvent(QTimerEvent * e) ;
  public:
    bool event_pub(QEvent * e)  { return event(e); }
    bool event_pub_parent(QEvent * e)  { return QRadioButton::event(e); }
    bool hitButton_pub(const QPoint & pos) const { return hitButton(pos); }
    bool hitButton_pub_parent(const QPoint & pos) const { return QRadioButton::hitButton(pos); }
    void mouseMoveEvent_pub(QMouseEvent * e)  { mouseMoveEvent(e); }
    void mouseMoveEvent_pub_parent(QMouseEvent * e)  { QRadioButton::mouseMoveEvent(e); }
    void paintEvent_pub(QPaintEvent * _p14)  { paintEvent(_p14); }
    void paintEvent_pub_parent(QPaintEvent * _p14)  { QRadioButton::paintEvent(_p14); }
    void checkStateSet_pub()  { checkStateSet(); }
    void checkStateSet_pub_parent()  { QRadioButton::checkStateSet(); }
    void nextCheckState_pub()  { nextCheckState(); }
    void nextCheckState_pub_parent()  { QRadioButton::nextCheckState(); }
    void changeEvent_pub(QEvent * e)  { changeEvent(e); }
    void changeEvent_pub_parent(QEvent * e)  { QRadioButton::changeEvent(e); }
    void focusInEvent_pub(QFocusEvent * e)  { focusInEvent(e); }
    void focusInEvent_pub_parent(QFocusEvent * e)  { QRadioButton::focusInEvent(e); }
    void focusOutEvent_pub(QFocusEvent * e)  { focusOutEvent(e); }
    void focusOutEvent_pub_parent(QFocusEvent * e)  { QRadioButton::focusOutEvent(e); }
    void keyPressEvent_pub(QKeyEvent * e)  { keyPressEvent(e); }
    void keyPressEvent_pub_parent(QKeyEvent * e)  { QRadioButton::keyPressEvent(e); }
    void keyReleaseEvent_pub(QKeyEvent * e)  { keyReleaseEvent(e); }
    void keyReleaseEvent_pub_parent(QKeyEvent * e)  { QRadioButton::keyReleaseEvent(e); }
    void mousePressEvent_pub(QMouseEvent * e)  { mousePressEvent(e); }
    void mousePressEvent_pub_parent(QMouseEvent * e)  { QRadioButton::mousePressEvent(e); }
    void mouseReleaseEvent_pub(QMouseEvent * e)  { mouseReleaseEvent(e); }
    void mouseReleaseEvent_pub_parent(QMouseEvent * e)  { QRadioButton::mouseReleaseEvent(e); }
    void timerEvent_pub(QTimerEvent * e)  { timerEvent(e); }
    void timerEvent_pub_parent(QTimerEvent * e)  { QRadioButton::timerEvent(e); }
  public:
    const QRadioButtonType* _baseType;
    ClassInstance* _obj;
    const CallEnvironment* _env;
};

inline ClassInstance* QRadioButtonType::cachedInstance(const QRadioButtonType::MuQtType* obj) { return obj->_obj; }

} // Mu

#endif // __MuQt__QRadioButtonType__h__