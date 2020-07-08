#include<iostream>
using namespace std;

int main() {
	setlocale(0, "rus");

	//1.1
	int days, full_weeks;
	int const days_in_week = 7;
	cout << "Сколько полных недель прошло?\nВведите исходные данные:\nКоличество дней -> ";
	cin >> days;
	full_weeks = days / days_in_week;
	cout << "Количество полных недель: " << full_weeks << endl;

	//1.2
	int n_time;
	int const seconds_in_hours = 3600, seconds_in_minutes = 60;
	cout << "Введите n секунд -> ";
	cin >> n_time;
	int hours = n_time / seconds_in_hours; // сколько целых часов
	int minutes = (n_time % seconds_in_hours) / seconds_in_minutes;
	int seconds = n_time % seconds_in_hours % seconds_in_minutes;
	cout << " Часов с начала суток " << hours << "\nМинут с начала очередного часа " << minutes << " \nСекунд с начала очередной минуты " << seconds << endl;

	//1.3
	int hight, width, square_side;
	cout << "Введите высоту четырехугольника -> ";
	cin >> hight;
	cout << "Введите ширину четырехугольника -> ";
	cin >> width;
	cout << "Введите сторону квадрата -> ";
	cin >> square_side;
	int square_sum = (hight * width) / square_side;
	cout << "Количество квадратов " << square_sum << endl;
}
