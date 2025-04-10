#pragma once
#include "Person.h"
#include <string>
#include <iostream>

class Teacher : public Person {
public:
    Teacher(const std::string& tid, const std::string& name, int age, int height);
    virtual ~Teacher();

    Teacher& operator=(const Teacher& other);
    bool operator==(const Teacher& other) const;

    const std::string& tid() const;
    void setTid(const std::string& id);

    virtual void showInfo() const override;

    friend std::ostream& operator<<(std::ostream& os, const Teacher& t);

private:
    std::string m_tid;
};
