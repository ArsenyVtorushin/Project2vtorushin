#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");


	int margarita = 5;
	int pepperoni = 6;
	int greek = 4;
	int cheese = 7;

	int cola = 4;
	int sok = 1;
	int cacao = 3;

	int choice_pizzas1, choice_drinks;



	// MENU	

	do
	{
		cout << "����:\n\n\t�����:\n\n\t1) ���������\n\t2) ���������\n\t3) ���������\n\t4) ������ ����\n\n\t�������:\n\n\t1) ����\n\t2) ���\n\n\t3) �����\n\n";
		cin >> choice_pizzas1
	} while (choice_pizzas1 < 0 && choice_pizzas1 > 4 && choice_drinks < 0 && choice_drinks > 3);







	int amount_pizzas, amount_drinks;

	int ITOG = 0;
	
	int more_pizzas;

	for (int i = 0; i < 10000; i++)
	{
		cout << "������� ��� �����: ";
		cin >> choice_pizzas1;
		cout << "������� ���� �� ������ �� ��������?";
		cin >> amount_pizzas;


		if (choice_pizzas1 == 1)
		{
			int cost_of_margarita = margarita * amount_pizzas;
			ITOG += cost_of_margarita;
		}

		else if (choice_pizzas1 == 2)
		{
			int cost_of_pepperoni = pepperoni * amount_pizzas;
			ITOG += cost_of_pepperoni;

		}

		else if (choice_pizzas1 == 3)
		{
			int cost_of_greek = greek * amount_pizzas;
			ITOG += cost_of_greek;

		}

		else if (choice_pizzas1 == 4)
		{
			int cost_of_cheese = cheese * amount_pizzas;
			ITOG += cost_of_cheese;

		}

		else
		{
			cout << "�������� ��� �����\n";
		}



		cout << "��� �����?\n\n1) ��\t2) ���";
		cin >> more_pizzas;

		if (more_pizzas == 2)
		{
			break;
		}

	}

	int more_drinks;

	int price_over_2 = 0;

	int j = 0;
	for ( ; j < 10000; j++)
	{
		cout << "������� ��� �������: ";
		cin >> choice_drinks;
		cout << "������� �������� �� ������ �� ��������?";
		cin >> amount_drinks;


		if (choice_drinks == 1)
		{
			int cost_of_cola = cola * amount_drinks;
			ITOG += cost_of_cola;
			price_over_2 = 1;
		}

		else if (choice_drinks == 2)
		{
			int cost_of_sok = sok * amount_drinks;
			ITOG += cost_of_sok;
		}

		else if (choice_drinks == 3)
		{
			int cost_of_cacao = cacao * amount_drinks;
			ITOG += cost_of_cacao;
			price_over_2 = 1;
		}

		else
		{
			cout << "�������� ��� �������";
		}

		cout << "��� �������?\n\n1) ��\t2) ���";
		cin >> more_drinks;

		if (more_drinks == 2)
		{
			break;
		}

	}
	
	
	if (ITOG > 50)
	{
		cout << "���! ��� ���������� ������ 20%\n";

		ITOG -= (ITOG / 100 * 20);
	}

	if (amount_drinks > 3 && price_over_2 == 1)
	{
		cout << "���! ��� ���������� ������ 15% �� �������\n";
		ITOG -= ITOG / 100 * 15;
	}
	
	if (amount_pizzas > 5)
	{
		cout << "���! ��� ���������� ����� ����� � �������\n";
	}

	//���


	

	return 0;
}
