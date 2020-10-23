#include<iostream>

using namespace std;                 /* 실습문제 예시에서는 2자리수 이상의 정수를 역순으로 변환하는 것이였지만 1자리수도 역순으로 표시하면 그 자신이 되므로 
									 양의 정수를 역순으로 변환하는 프로그램을 설계하였습니다.
									 
									 만약 2자리수 이상만 변환하도록 설계 하고 싶으면 밑의 if (num1 > 0) 을 --> if (num1 > 9) 로만 바꿔주면 됩니다. */
void main()
{
	int num1, num2;                                // 입력할 정수변수 num1과 역순으로 출력할 정수변수 num2를 선언한다.

	cout << "어떤 정수 값을 읽고, 그 값이 양의 값이면, 그 수를 역순으로 출력하는 프로그램입니다." << endl;
	cout << "정수 값을 입력하세요." << endl << "입력 : ";
	cin >> num1;                                  // 최초에 정수 변수를 입력한다.
	
	cout << "출력 : ";

	if (num1 > 0)                                // 양수만 입력으로 받아들이는 프로그램을 설계하므로 if 문으로 입력변수 > 0 조건을 걸어준다.
	{
		do                                       // 역순으로 표출되는 출력값을 얻기 위해 do-while 문을 이용하여 연산식을 반복 및 일정 조건이 되면 탈출 하도록 만든다. 
		{
			num2 = num1 % 10;                    // 최초에 출력값 num2는 입력값 num1을 10으로 나눈 나머지이다. 예) num1 : 1234 / num2 : 4                   
			cout << num2;                        // 그 후 num2를 출력한다. 예) 출력 : 4
			num1 = num1 / 10;                    // 그 후 num1을 10으로 나눈 값이 num1이 되도록 한다. 예) num1 : 123 (123.4 이지만 정수 변수이므로 0.4는 버려진다.)
		} while (num1 >= 1);                     /* num1이 1이상일경우 do문의 처음으로 들어가 반복한다. 
												    만약 1보다 작을경우는 입력값을 역순으로 모두 출력한 후 이므로 반복을 종료하고 다음 명령문으로 넘어간다. */
		cout << endl << "프로그램을 종료합니다." << endl ; // 역순으로 모두 출력 후 프로그램을 종료한다.
	}
	else                                         // 최초의 입력값이 양수가 아닐경우 '잘못된 값 입력' 이라는 메시지를 출력 후 프로그램이 종료되도록 한다.
		cout << "잘못된 값을 입력하셨습니다. 프로그램을 종료합니다." << endl;

	system("pause");
}