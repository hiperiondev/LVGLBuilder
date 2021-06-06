#ifndef LVGLEVENTTYPE_H
#define LVGLEVENTTYPE_H

#include <QObject>

class LVGLEventType final {
 public:
  enum WType {
    BASIC = 0,
    ARC,
    BAR,
    BUTTON,
    CHECKBOX,
    DROPDOWNLIST,
    IMAGE,
    IMAGEBUTTON,
    LABEL,
    LED,
    ROLLER,
    SLIDER,
    SPINBOX,
    SWITCH,
    TEXTAREA
  };

 public:
  LVGLEventType(int type);
  LVGLEventType(int type, int wtype);
  LVGLEventType(int type, int wtype, int Role);

  void init();

  inline QStringList getObjName() const { return m_objName; }
  inline QStringList getPropertyList() const { return m_propertyList; }
  inline QStringList getValuelist() const { return m_valueList; }
  inline QStringList getAmName() const { return m_amName; }
  inline QStringList getScreenName() const { return m_screenName; }
  inline QStringList getOpaName() const { return m_opaName; }
  inline QStringList getFadeModeList() const { return m_fademodelist; }
  inline int getRole() { return m_role; }
  inline int getwtype() { return m_wtype; }
  inline QStringList getanimObjList() { return m_animObjList; }
  inline QStringList getanimPathList() { return m_animPathList; }
  inline void setneedCusVal(bool b) { m_needCustomeValue = b; }
  inline bool getneedCusVal() { return m_needCustomeValue; }

 private:
  QStringList m_objName;
  QStringList m_propertyList;
  QStringList m_valueList;
  QStringList m_amName;
  QStringList m_screenName;
  QStringList m_opaName;
  QStringList m_fademodelist;
  QStringList m_animObjList;
  QStringList m_animPathList;
  int m_type;
  int m_wtype;
  int m_role;
  bool m_needCustomeValue;
};

#endif  // LVGLEVENTTYPE_H