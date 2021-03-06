#include<iostream>

using namespace std;

void main()
{
	int num, a, b, c;   /* 입력한 정수(만약 유리수를 입력하면 정수 부분만 인정됨.) 
						만큼의 단수를 가지는 피라미드를 설계하기 위해 입력숫자 : num / 단 수 : a / 공백 : b / 별표 : c 의 변수를 선언한다. */

	cout << "임의의 양의 정수값을 입력하면 그 수 만큼의 단수의 피라미드를 표시하는 프로그램입니다." << endl << "피라미드의 단수를 입력하세요." << endl << "입력 : ";
	cin >> num;        // 숫자 입력

	cout << "당신이 원하는 피라미드 입니다." << endl << endl;
                                                                         // 여러가지 경우의 변수의 연산을 실행하기 위하여 다중 for문을 활용하였다
	for (a = 1; a <= num; a = a + 1)                                    // 첫번 째로 피라미드의 단수를 결정하는 변수 a에 대한 for문이다. a가 num단이 될 때까지 실행되며 +1 씩 증가한다.
	{
		for (b = 1; b <= num - a; b = b + 1)                           // 두번 째로 공백을 결정하는 변수 b에 대한 for문이다. 공백의 수는 num - a 만큼이다.
		{
			cout << " ";
		}
		for (c = 1; c <= (a * 2 - 1); c = c + 1)                // 세번 째로 별표를 결정하는 변수 c에 대한 for문이다. 별표의 수는 (a * 2 - 1) 만큼이다.
		{
			cout << "*";
		}
		cout << endl;                                            // a=1 인 경우에서의 for문이 모두 완료되면 마지막으로 줄바꿈(enter)을 하고 a=2 인 경우의 for문으로 반복된다.
	}

	cout << endl << endl << "프로그램을 종료합니다." << endl ;              /* 주의할점 : 만약 num을 음의 값이나 0을 입력하면 첫번 째 for문에서의 조건을 만족시키지 못하므로 
																             for문은 애초에 실행되지 않고 바로 프로그램은 종료된다. */
	system("pause");
}