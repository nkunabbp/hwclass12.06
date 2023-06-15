#include<iostream>

using namespace std;


#pragma region agregation


class my_favorite_cafe
{
private:
	string location;
	string name;
	int branches;
	bool isPaidByCard;
public:
	my_favorite_cafe(string name, string location, int branches, bool isPaidByCard) :
		name(name),
		location(location),
		branches(branches),
		isPaidByCard(isPaidByCard) {};

	my_favorite_cafe() {};

	~my_favorite_cafe() {};


	void info()const {
		cout << "Cafe name: " << name << endl;
		cout << "Location: " << location << endl;
		cout << "How much branches: " << branches << endl;
		cout << "Is paid by cash: " << boolalpha << isPaidByCard << endl;
	}
};



class Drink
{
private:
	string name_d;
	double cost;
	int varieties_of_drinks;
	int ice_cubes;
	my_favorite_cafe cafe;
public:
	Drink(string name_d, double cost, int varieties_of_drinks, int ice_cubes, string name, string location, int branches, bool isPaidByCard) :
		name_d(name_d),
		cost(cost),
		varieties_of_drinks(varieties_of_drinks),
		ice_cubes(ice_cubes),
		cafe(my_favorite_cafe(name, location, branches, isPaidByCard))
	{

	}

	Drink() {};
	~Drink() {};


	void show_info_drink()const {
		cafe.info();
		cout << "Drink is called: " << name_d << endl;
		cout << "Price: " << cost << endl;
		cout << "Varieties of this drink: " << varieties_of_drinks << endl;
		cout << "Ice: " << ice_cubes << endl;
	}

};

class Worker
{
private:
	string FirstName;
	string LastName;
	int age;
	int salary;
	my_favorite_cafe cafe;

public:
	Worker(string FirstName, string LastName, int age, int salary, string name, string location, int branches, bool isPaidByCard) :
		FirstName(FirstName),
		LastName(LastName),
		age(age),
		salary(salary),
		cafe(my_favorite_cafe(name, location, branches, isPaidByCard)) {};
	Worker() {};

	~Worker() {};

	void show_info_worker()const {
		cout << "Hi, i'm " << FirstName << " " << LastName << endl;
		cout << "I'm " << age << " years old." << endl;
		cout << "Information about my work: " << endl;
		cafe.info();
		cout << "Bye!" << endl;
	}
};
#pragma endregion

#pragma region composition - lego
/*
class Home_istruction
{
private:
	string model;
	int Model_number;
	int page_count;
public:
	Home_istruction() {};
	Home_istruction(string model, int Model_number, int page_count) :
		model(model),
		Model_number(Model_number),
		page_count(page_count) {};

	~Home_istruction() {};

	void info() const {
		cout << "Model: " << model << endl;
		cout << "Model code: " << Model_number << endl;
		cout << "Pages: " << page_count << endl;
	}
};

class lego_detail
{
private:
	double how_much_takes;
	int lego_people;
	int how_many_details;
	int plastic_bag;
	Home_istruction model;
public:
	lego_detail(double how_much_takes, int lego_people, int how_many_details, int plastic_bag, string model, int Model_number, int page_count) :
		how_much_takes(how_much_takes),
		lego_people(lego_people),
		how_many_details(how_many_details),
		plastic_bag(plastic_bag),
		model(Home_istruction(model, Model_number, page_count))
	{

	}

	lego_detail() {};
	~lego_detail() {};

	void Show_info() const {
		model.info();
		cout << "Time it take: " << how_much_takes << endl;
		cout << "Lego people: " << lego_people << endl;
		cout << "Details: " << how_many_details << endl;
		cout << "Plastic bags: " << plastic_bag << endl;
	}
};


*/
#pragma endregion



int main() {
	//composition
		/*lego_detail l1(2.5, 2, 1344, 4, "Lego Friends Mia's camper Van", 41339, 133);
		l1.Show_info();*/
	//agregation
		/*Drink d1("Ice Tea", 6, 12, 10, "Second Cup", "Ceyhun Hacibeyli Street, 51", 5, 1);
	d1.show_info_drink();
	cout << "--------------------------------" << endl;
	Worker w1("Alala", "Alalashovic", 21, 1434565243, "Second Cup", "Ceyhun Hacibeyli Street, 51", 5, 1);
	w1.show_info_worker();*/
}
