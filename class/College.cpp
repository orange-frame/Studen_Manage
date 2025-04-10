#include "College.h"
#include <iostream>

College::College(const std::string& cid, const std::string& cname)
    : m_cid(cid), m_cname(cname) {}

College::~College() {
    for (auto s : s_list) delete s;
    for (auto t : t_list) delete t;
}

void College::setCid(const std::string& id) {
    m_cid = id;
}

const std::string& College::cid() const {
    return m_cid;
}

void College::setCname(const std::string& name) {
    m_cname = name;
}

const std::string& College::cname() const {
    return m_cname;
}

bool College::compareCid(const std::string& id) const {
    return m_cid == id;
}

// 学生管理
void College::studentListAdd(const Student& s) {
    s_list.push_back(new Student(s));
}

void College::studentListDel(const std::string& sid) {
    for (auto it = s_list.begin(); it != s_list.end(); ++it) {
        if ((*it)->compareSid(sid)) {
            delete *it;
            s_list.erase(it);
            return;
        }
    }
}

const Student* College::studentInfo(const std::string& sid) const {
    for (auto s : s_list) {
        if (s->compareSid(sid)) return s;
    }
    return nullptr;
}

void College::showStudentList() const {
    std::cout << "--- Student List for College [" << m_cname << "] ---" << std::endl;
    for (auto s : s_list) {
        s->showInfo();
    }
}

// 教师管理
void College::teacherListAdd(const Teacher& t) {
    t_list.push_back(new Teacher(t));
}

void College::teacherListDel(const std::string& tid) {
    for (auto it = t_list.begin(); it != t_list.end(); ++it) {
        if ((*it)->tid() == tid) {
            delete *it;
            t_list.erase(it);
            return;
        }
    }
}

const Teacher* College::teacherInfo(const std::string& tid) const {
    for (auto t : t_list) {
        if (t->tid() == tid) return t;
    }
    return nullptr;
}

void College::showTeacherList() const {
    std::cout << "--- Teacher List for College [" << m_cname << "] ---" << std::endl;
    for (auto t : t_list) {
        t->showInfo();
    }
}
