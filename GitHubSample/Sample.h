#pragma once

#include <string>


class Sample
{
	//	�����o�ϐ�
private:
	std::string classId;
	std::string name;

public:
	Sample();

	std::string GetClassID() { return classId; }
	std::string GetName() { return name; }
};
