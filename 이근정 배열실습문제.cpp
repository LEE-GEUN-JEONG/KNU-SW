#include<iostream>

using namespace std;

void main()
{
	int A[10];                                // 10개의 정수를 정렬 해야 하므로 10개의 일차원 배열을 가질 수 있도록 변수를 선언한다.
	int i, j, x;                              // i는 0번부터 9번까지의 번지수, j는 A[i]와 A[j]의 크기 비교를 위한 i+1 인 정수, x는 내림차순 정렬을 위한 자리 바꿈을 위한 변수로 선언하였다.
	cout << "일차원 배열을 이용하여 10개를 내림차순으로 정렬하는 프로그램" << endl;
	cout << "10개의 정수를 차례로 입력하시오." << endl;

	for (i = 0; i < 10; i++)                           // 처음 10개의 일차원 배열을 입력한다.
	{
		cout << "A[" << i << "]=";
		cin >> A[i];
	}

	for (i = 0; i < 10; i++)                                /* i가 숫자 크기 비교를 위해 0에서부터 9까지 +1씩 증가하면서 j와 숫자 크기 비교를 한다.
															예를 들어 i가 0일 경우에는 9번 비교하고, i가 5일 경우 4번 비교한다. */
	{
		for (j = i + 1; j < 10; j++)                       // j는 i보다 +1인 수로 9까지 증가하면서 같은 i에 대하여 숫자 크기를 비교한다.
		{
			if (A[i] > A[j])                              /* 만약 A[i]가 A[j]보다 크다면 x라는 변수에 AI를 넣는다.  (배열비교)
															 AI는 더 작은 수인 AJ로 바뀐다.  (배열자리바꿈)
															 AJ는 원래 자신의 숫자보다 컸던 AI로 바뀐다. 이 때 X라는 변수의 값이 AI이므로 AJ는 X로 바뀐다.

															 만약 AI가 AJ보다 작다면 if문을 만족하지 못하게 되어 if문을 탈출하게 되고 바로 위의 for문으로 다시 들어가게 된다.
															 그 후 j++ 된 값에 대하여 위의 작업을 반복한다. */
			{
				x = A[i];
				A[i] = A[j];
				A[j] = x;
			}
		}
	}

	cout << endl << "내림차순으로 재배열되었습니다." << endl;

	for (i = 0; i < 10; i++)                               /* 위의 작업을 통해 모든 수에 대하여 내림차순으로 숫자가 재배열 되었다.
														   따라서 A[0]~A[9] 의 숫자는 내림차순으로 배열되었다 */

	{
		cout << A[i] << endl;                              // 따라서 for문을 활용해 A[0]~A[9] 까지 출력을 한다면 내림차순으로 결과가 나타날 것이다.
	}

	system("PAUSE");                                     // 추가적으로 만약 입력 숫자 중 같은 숫자가 있다면 if문을 통한 숫자 비교를 통해 결과적으로 같은 숫자끼리 붙어서 출력된다.
}