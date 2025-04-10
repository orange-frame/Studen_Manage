#pragma once
#include "Student.h"
#include "Teacher.h"
#include <string>
#include <list>

class College {
public:
    College(const std::string& cid, const std::string& cname);
    ~College();

    void setCid(const std::string& id);
    const std::string& cid() const;

    void setCname(const std::string& name);
    const std::string& cname() const;

    bool compareCid(const std::string& id) const;

    // 学生管理
    void studentListAdd(const Student& s);
    void studentListDel(const std::string& sid);
    const Student* studentInfo(const std::string& sid) const;
    void showStudentList() const;

    // 教师管理
    void teacherListAdd(const Teacher& t);
    void teacherListDel(const std::string& tid);
    const Teacher* teacherInfo(const std::string& tid) const;
    void showTeacherList() const;

private:
    std::string m_cid;
    std::string m_cname;

    std::list<Student*> s_list;
    std::list<Teacher*> t_list;
};
