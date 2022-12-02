//以下是一个通讯录管理系统
#include <bits/stdc++.h>
using namespace std;
#define MAX 100

//显示菜单界面
void ShowMenu() {
	cout << "********************" << endl;
	cout << "*** 1.添加联系人 ***" << endl;
	cout << "*** 2.显示联系人 ***" << endl;
	cout << "*** 3.删除联系人 ***" << endl;
	cout << "*** 4.查找联系人 ***" << endl;
	cout << "*** 5.修改联系人 ***" << endl;
	cout << "*** 6.清空联系人 ***" << endl;
	cout << "*** 0.退出通讯录 ***" << endl;
	cout << "********************" << endl;
}

//结构体——联系人
struct Person {
	string m_Name;		//姓名
	int m_Gender;		//性别
	int m_Age;			//年龄
	string m_Phone;		//联系方式
	string m_Address;	//家庭住址
};

//结构体——通讯录
struct AddressBooks {
	struct Person PersonArray[MAX] = {};	//结构体数组，存储通讯录的人员
	int m_size=0;							//记录的通讯录的人数
};

//函数1.添加联系人操作
void AddPerson(AddressBooks& a) {
	if (a.m_size == MAX) {
		cout << "通讯录已满，请删除后重试" << endl;
		return;
	}
	//添加联系人
	string name;
	cout << "请输入姓名" << endl;
	cin >> name;
	a.PersonArray[a.m_size].m_Name = name;	//添加联系人数据到数组，m_size表示添加位置

	//添加性别
	int gender;
	cout << "请输入性别" << endl;
	cout << "1--男性，2--女性" << endl;
	while (true) {
		cin >> gender;
		if (gender == 1 || gender == 2) {		//输入合法
			a.PersonArray[a.m_size].m_Gender = gender;
			break;
		}
		cout << "输入有误，请重新输入" << endl;
	}

	//添加年龄
	cout << "请输入年龄" << endl;
	int age;
	cin >> age;
	a.PersonArray[a.m_size].m_Age = age;

	//添加联系方式
	cout << "请输入联系方式" << endl;
	string phone;
	cin >> phone;
	a.PersonArray[a.m_size].m_Phone = phone;

	//添加家庭住址
	cout << "请输入家庭住址" << endl;
	string address;
	cin >> address;
	a.PersonArray[a.m_size].m_Address = address;

	//随后更新通讯录人数
	a.m_size++;
	cout << "添加联系人成功！" << endl;
	//清屏
	system("pause");
	system("cls");
}

//函数2.显示联系人
void ShowPerson(AddressBooks& a) {
	//判断是否为空
	if (a.m_size == 0) {
		cout << "当前通讯录还没有联系人！" << endl;
		system("pause");
		system("cls");
		return;
	}

	//逐个打印出联系人的所有信息
	for (int i = 0;i < a.m_size;i++) {
		cout << "姓名：" << a.PersonArray[i].m_Name << "\t";
		cout << "性别：" << (a.PersonArray[i].m_Gender==1 ? "男" : "女") << "\t";//用三目运算符显示性别
		cout << "年龄：" << a.PersonArray[i].m_Age << "\t";
		cout << "联系方式：" << a.PersonArray[i].m_Phone << "\t";
		cout << "家庭住址：" << a.PersonArray[i].m_Address << endl;
	}
	//打印完成后退出
	system("pause");
	system("cls");
}

//函数3.查找联系人
int IsExist(AddressBooks& a, string name) {
	//先遍历通讯录
	for (int i = 0;i < a.m_size;i++) {
		if (a.PersonArray[i].m_Name == name)
			return i;		//返回这个人的信息在通讯录中的位置
	}
	//没有找到这个人
	return -1;
}
//函数4.删除联系人
void DeletePerson(AddressBooks& a) {
	if (a.m_size==0) {
		cout << "删除失败，当前通讯录没有联系人" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "请输入要删除的联系人：" << endl;
	string name;
	cin >> name;
	int ret = IsExist(a, name);

	if (ret != -1) {
		for (int i = ret;i < a.m_size-1;i++) {
			a.PersonArray[i] = a.PersonArray[i + 1];
		}
		a.m_size--;
		cout << "删除成功！" << endl;
	}else {
		cout << "查无此人！" << endl;
	}
	system("pause");
	system("cls");
}

//函数5.查找并显示相应联系人的信息
void FindPerson(AddressBooks& a) {
	if (a.m_size==0) {
		cout << "查找失败，当前通讯录没有联系人！" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "请输入你要查找的联系人姓名：" << endl;
	string name;
	cin >> name;
	int t=IsExist(a, name);
	if (t != -1) {
		cout << "查找成功！" << endl;
		cout << "姓名：" << a.PersonArray[t].m_Name << "\t";
		cout << "性别：" << (a.PersonArray[t].m_Gender == 1 ? "男" : "女") << "\t";//用三目运算符显示性别
		cout << "年龄：" << a.PersonArray[t].m_Age << "\t";
		cout << "联系方式：" << a.PersonArray[t].m_Phone << "\t";
		cout << "家庭住址：" << a.PersonArray[t].m_Address << endl;
	}
	else {
		cout << "查无此人！" << endl;
	}
	system("pause");
	system("cls");
}

//函数6.修改联系人的信息
void ChangePerson(AddressBooks& a) {
	string name;
	if (a.m_size == 0) {
		cout << "当前通讯录还没有联系人，不能修改！" << endl;
		system("pause");
		system("cls");
		return;
	}
	while(true){
		cout << "请输入你要修改的联系人姓名：" << endl;
		cin >> name;
		int t = IsExist(a, name);
		if (t != -1) {
			cout << "请重新输入该联系人信息：" << endl;
			//修改姓名
			cout << "请输入姓名：" << endl;
			cin >> name;
			a.PersonArray[t].m_Name = name;
	
			//修改性别
			int gender;
			cout << "请输入性别：" << endl;
			cout << "1--男性，2--女性" << endl;
			while (true) {
				cin >> gender;
				if (gender == 1 || gender == 2) {		//输入合法
					a.PersonArray[t].m_Gender = gender;
					break;
				}
				cout << "输入有误，请重新输入：" << endl;
			}

			//修改年龄
			cout << "请输入年龄：" << endl;
			int age;
			cin >> age;
			a.PersonArray[t].m_Age = age;
	
			//修改联系方式
			cout << "请输入联系方式：" << endl;
			string phone;
			cin >> phone;
			a.PersonArray[t].m_Phone = phone;
	
			//修改家庭住址
			cout << "请输入家庭住址：" << endl;
			string address;
			cin >> address;
			a.PersonArray[t].m_Address = address;

			cout << "修改成功！" << endl;
			break;
		}
		else {
			cout << "查无此人，请重新输入：" << endl;
		}
	}
	system("pause");
	system("cls");
}

//函数7.清空通讯录
void ClearBook(AddressBooks& a) {
	if (a.m_size == 0) {
		cout << "当前通讯录无需清空" << endl;
		system("pause");
		system("cls");
		return;
	}
	int ret = 0;
	cout << "请确认是否清空联系人？" << endl;
	cout << "1--确认"   "2--取消" << endl;
	cin >> ret;
	if (a.m_size == 0) {
		cout << "当前通讯录里没有联系人" << endl;
		system("pause");
		system("cls");
	}else if (a.m_size != 0) {
		if (ret == 1) {
			for (int i = a.m_size;i >= 0;i--) {
				a.PersonArray[i].m_Name = "";
				a.PersonArray[i].m_Gender = 0;
				a.PersonArray[i].m_Age = 0;
				a.PersonArray[i].m_Phone = "";
				a.PersonArray[i].m_Address = "";
			}
			a.m_size = 0;
			cout << "清空完成！" << endl;
			system("pause");
			system("cls");
		}
		else if (ret == 2) {
			system("pause");
			system("cls");
		}
	}
}

//主函数
int main() {
	
	struct AddressBooks a;	//创建一个通讯录的变量
	a.m_size = 0;
	int select = 0;			//创建用户的输入变量
	while (true) {
		ShowMenu();
		cin >> select;
		switch (select) {
		case 0:				//退出通讯录
			cout << "拜拜！" << endl;
			system("pause");
			return 0;
		case 1:				//添加联系人
			AddPerson(a);
			break;
		case 2:				//显示联系人
			ShowPerson(a);
			break;
		case 3:				//删除联系人
			DeletePerson(a);
			break;
		case 4:				//查找联系人
			FindPerson(a);
			break;
		case 5:				//修改联系人
			ChangePerson(a);
			break;
		case 6:				//清空联系人
			ClearBook(a);
			break;
		default:
			cout << "输入不正确，请重新输入！" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
}