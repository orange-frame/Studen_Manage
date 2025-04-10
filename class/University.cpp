#include "University.h"
#include <iostream>

University::University(const std::string& uid, const std::string& uname, const std::string& uaddr)
    : m_uid(uid), m_uname(uname), m_uaddr(uaddr) {}

University::~University() {
    for (auto c : c_list) {
        delete c;
    }
}

void University::setUid(const std::string& uid) {
    m_uid = uid;
}

const std::string& University::uid() const {
    return m_uid;
}

void University::setUname(const std::string& uname) {
    m_uname = uname;
}

const std::string& University::uname() const {
    return m_uname;
}

void University::setUaddr(const std::string& uaddr) {
    m_uaddr = uaddr;
}

const std::string& University::uaddr() const {
    return m_uaddr;
}

// 学院管理
void University::collegeListAdd(const College& c) {
    c_list.push_back(new College(c));
}

void University::collegeListDel(const std::string& cid) {
    for (auto it = c_list.begin(); it != c_list.end(); ++it) {
        if ((*it)->compareCid(cid)) {
            delete *it;
            c_list.erase(it);
            return;
        }
    }
}

const College* University::collegeInfo(const std::string& cid) const {
    for (auto c : c_list) {
        if (c->compareCid(cid)) {
            return c;
        }
    }
    return nullptr;
}

void University::showCollegeList() const {
    std::cout << "======== College List for University [" << m_uname << "] ========" << std::endl;
    for (auto c : c_list) {
        std::cout << "ID: " << c->cid() << ", Name: " << c->cname() << std::endl;
    }
}
