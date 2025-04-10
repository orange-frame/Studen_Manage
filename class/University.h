#pragma once
#include "College.h"
#include <string>
#include <list>

class University {
public:
    University(const std::string& uid, const std::string& uname, const std::string& uaddr);
    ~University();

    void setUid(const std::string& uid);
    const std::string& uid() const;

    void setUname(const std::string& uname);
    const std::string& uname() const;

    void setUaddr(const std::string& uaddr);
    const std::string& uaddr() const;

    // 学院管理
    void collegeListAdd(const College& c);
    void collegeListDel(const std::string& cid);
    void showCollegeList() const;
    const College* collegeInfo(const std::string& cid) const;

private:
    std::string m_uid;
    std::string m_uname;
    std::string m_uaddr;

    std::list<College*> c_list;
};
