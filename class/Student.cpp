#include "Student.h"

Student::Student(std::string sid, std::string name, int age, int height)
                :Person(name,age,height),m_sid(sid){}

Student::~Student(){}

void Student::showInfo() const{
    std::cout<< "[Student] SID: "<< m_sid
            <<", Name: " << m_name
            <<", Age: "<< m_age
            <<", Height: "<< m_height<<std::endl;
} 
Student& Student::operator=(const Student &other) {
    if(this != &other){
        Person::operator=(other);
        m_sid = other.m_sid;
    }
    return *this;
}
std::ostream& operator<<(std::ostream &os, const Student &s ) {
    os<< "[Student] SID: "<< s.m_sid
      <<", Name: " << s.m_name
      <<", Age: "<< s.m_age
      <<", Height: "<< s.m_height<<std::endl;
      return os;
}

bool Student::compareSid( const std::string &sid )const{
    return m_sid == sid;
}

void Student::setSid(const std::string id) {
    m_sid = id;
}

const std::string& Student::sid()const{
    return m_sid;
}