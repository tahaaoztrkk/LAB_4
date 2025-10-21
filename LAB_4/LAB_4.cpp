#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*TASK - 1
int main() {
    string name;
    cout << "Enter file name: ";
    getline(cin, name); 

    ofstream file(name, ios::app); 

    if (file.is_open()) {
        file << "hello world" << endl;
        file.close();
        cout << "File '" << name << "' created successfully!" << endl;
    }
    else {
        cout << "Error: could not create file!" << endl;
    }
    return 0;
}*/

/*TASK-2
int rectangle() {
    int width, height;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;

    int area = width * height;
    cout << "Area of rectangle is: " << area << endl;

    return area;
}

int main() {
    ofstream file("rectangle_area.txt", ios::app); 

    if (file.is_open()) {
        int area = rectangle(); 
        file << "Rectangle area: " << area << endl; 
        file.close();  
        cout << "Area written to rectangle_area.txt successfully!" << endl;
    }
    else {
        cout << "Error" << endl;
    }

    return 0;
}*/

/*TASK-3
int main() {

	int arr[5] = { 1,2,3,4,5 };

	for (int i = 0; i < 5; i++) {
		int square = arr[i] * arr[i];
		cout << square << endl;

		ofstream file("squares.txt", ios::app);
		if (file.is_open()) {
			file << "squares are: " << square<<endl;
		}
	}
}*/

/*TASK - 4
int main() {

	string name, surname;
	cout << "enter name: ";
	cin >> name;
	cout << "enter surname: ";
	cin >> surname;

	ofstream file("names.log", ios::app);
	if (file.is_open()) {

		file << name<<;

		file << surname;
		file.close();

		cout << "created succesfully";
	}
}*/

/*TASK - 5
int main() {

	char ch;
	int count = 0;
	ifstream file("sample.txt");

	if (file.is_open()) {

		cout << "reading chars from file: ";
		while (file.get(ch)) {
			cout << ch;
			count++;
		}

		cout <<"count is: "<<count << endl;
		file.close();
	}
	else { cout << "error"; }
	return 0;

}*/

/*TASK - 6
int main() {
	char ch;
	ofstream file("source.txt", ios::app);
	ofstream file1("destination.txt", ios::app);
	if (file.is_open()) {

		file << "hello I am Taha ";
		file.close();

	}
	else { cout << "error "; }

	ifstream file2("source.txt");
	ofstream file3("destination.txt",ios::app);

	while (file2.get(ch)) {
		file3.put(ch);
	}
	cout << "copied succesfully";
	file.close();
	file1.close();
}*/

int main() {

	ofstream file("numbers.txt");
	
}
