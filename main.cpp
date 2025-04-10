#include "./class/University.h"
#include "./class/Student.h"
#include "./class/Teacher.h"
#include "./class/College.h"

#include <iostream>

int main() {
    // ������ѧ
    University uni("U001", "�廪��ѧ", "����");

    // ����ѧԺ
    College cs("C001", "�����ѧԺ");
    College math("C002", "��ѧѧԺ");

    // ���ѧ��
    Student s1("S001", "����", 20, 175);
    Student s2("S002", "����", 21, 180);
    cs.studentListAdd(s1);
    cs.studentListAdd(s2);

    // ��ӽ�ʦ
    Teacher t1("T001", "����ʦ", 40, 170);
    Teacher t2("T002", "����ʦ", 38, 165);
    cs.teacherListAdd(t1);
    cs.teacherListAdd(t2);

    // ���ѧԺ����ѧ
    uni.collegeListAdd(cs);
    uni.collegeListAdd(math);

    // չʾ����ѧԺ
    uni.showCollegeList();

    // ��ѯѧԺ��չʾѧ���б�
    const College* targetCollege = uni.collegeInfo("C001");
    if (targetCollege) {
        std::cout << "\n[չʾѧԺ��ѧ������]:" << std::endl;
        targetCollege->showStudentList();

        std::cout << "\n[չʾѧԺ�ڽ�ʦ����]:" << std::endl;
        targetCollege->showTeacherList();
    } else {
        std::cout << "�Ҳ���ѧԺID: C001" << std::endl;
    }

    return 0;
}
