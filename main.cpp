#include "./class/University.h"
#include "./class/Student.h"
#include "./class/Teacher.h"
#include "./class/College.h"

#include <iostream>

int main() {
    // 创建大学
    University uni("U001", "清华大学", "北京");

    // 创建学院
    College cs("C001", "计算机学院");
    College math("C002", "数学学院");

    // 添加学生
    Student s1("S001", "张三", 20, 175);
    Student s2("S002", "李四", 21, 180);
    cs.studentListAdd(s1);
    cs.studentListAdd(s2);

    // 添加教师
    Teacher t1("T001", "王老师", 40, 170);
    Teacher t2("T002", "赵老师", 38, 165);
    cs.teacherListAdd(t1);
    cs.teacherListAdd(t2);

    // 添加学院到大学
    uni.collegeListAdd(cs);
    uni.collegeListAdd(math);

    // 展示所有学院
    uni.showCollegeList();

    // 查询学院并展示学生列表
    const College* targetCollege = uni.collegeInfo("C001");
    if (targetCollege) {
        std::cout << "\n[展示学院内学生名单]:" << std::endl;
        targetCollege->showStudentList();

        std::cout << "\n[展示学院内教师名单]:" << std::endl;
        targetCollege->showTeacherList();
    } else {
        std::cout << "找不到学院ID: C001" << std::endl;
    }

    return 0;
}
