#include "Teacher.h"

Teacher::Teacher(const std::string& tid, const std::string& name, int age, int height)
    : Person(name, age, height), m_tid(tid) {}

Teacher::~Teacher() {}

Teacher& Teacher::operator=(const Teacher& other) {
    if (this != &other) {
        Person::operator=(other);
        m_tid = other.m_tid;
    }
    return *this;
}

bool Teacher::operator==(const Teacher& other) const {
    return m_tid == other.m_tid;
}

const std::string& Teacher::tid() const {
    return m_tid;
}

void Teacher::setTid(const std::string& id) {
    m_tid = id;
}

void Teacher::showInfo() const {
    std::cout << "[Teacher] TID: " << m_tid
              << ", Name: " << m_name
              << ", Age: " << m_age
              << ", Height: " << m_height << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Teacher& t) {
    os << "[Teacher] TID: " << t.m_tid
       << ", Name: " << t.m_name
       << ", Age: " << t.m_age
       << ", Height: " << t.m_height;
    return os;
}
