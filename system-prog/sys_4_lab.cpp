#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Subject {
  string name;
  int course;
  int module;
  int score;
};

int main() {
  int n = 5;    
  Subject subjects[n];
  
  for (int i = 0; i < n; i++) {
    cout << "\n";  
    cout << "Номер №" << i + 1 << " информация:\n";
    cout << "Название предмета: ";
    cin >> subjects[i].name;
    cout << "Курс: ";
    cin >> subjects[i].course;
    cout << "Модуль: ";
    cin >> subjects[i].module;
    cout << "Баллы: ";
    cin >> subjects[i].score;
  }
  
  ofstream file("example.txt");
  if (file.is_open()) {
    for (int i = 0; i < n; i++) {
      file << subjects[i].name << '\n';
      file << subjects[i].course << '\n';
      file << subjects[i].module << '\n';
      file << subjects[i].score << "\n\n";
    }
    file.close();
  } else {
    cout << "Ощибка создание файла!";
  }
  
  return 0;
}
