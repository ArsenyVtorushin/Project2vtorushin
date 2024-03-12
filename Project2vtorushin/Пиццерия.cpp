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
		cout << "Меню:\n\n\tПиццы:\n\n\t1) Маргарита\n\t2) Пепперони\n\t3) Греческая\n\t4) Четыре Сыра\n\n\tНапитки:\n\n\t1) Кола\n\t2) Сок\n\n\t3) Какао\n\n";
		cin >> choice_pizzas1
	} while (choice_pizzas1 < 0 && choice_pizzas1 > 4 && choice_drinks < 0 && choice_drinks > 3);







	int amount_pizzas, amount_drinks;

	int ITOG = 0;
	
	int more_pizzas;

	for (int i = 0; i < 10000; i++)
	{
		cout << "Введите код пиццы: ";
		cin >> choice_pizzas1;
		cout << "Сколько пицц вы хотели бы заказать?";
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
			cout << "Выберите код пиццы\n";
		}



		cout << "Ещё пиццу?\n\n1) Да\t2) Нет";
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
		cout << "Введите код напитка: ";
		cin >> choice_drinks;
		cout << "Сколько стаканов вы хотели бы заказать?";
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
			cout << "Выберите код напитка";
		}

		cout << "Ещё напиток?\n\n1) Да\t2) Нет";
		cin >> more_drinks;

		if (more_drinks == 2)
		{
			break;
		}

	}
	
	
	if (ITOG > 50)
	{
		cout << "Ура! Вам полагается скидка 20%\n";

		ITOG -= (ITOG / 100 * 20);
	}

	if (amount_drinks > 3 && price_over_2 == 1)
	{
		cout << "Ура! Вам полагается скидка 15% на напитки\n";
		ITOG -= ITOG / 100 * 15;
	}
	
	if (amount_pizzas > 5)
	{
		cout << "Ура! Вам полагается пятая пицца в подарок\n";
	}

	//ЧЕК


	

	return 0;
}
