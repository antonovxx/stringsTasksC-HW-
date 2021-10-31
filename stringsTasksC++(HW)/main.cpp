//Реализовать следующие функции для работы со строками:
//     1. Подсчитать длину строки
//     2. Подсчитать количество слов в строке
//     3. Перевести строку в верхний регистр
//     4. Перевести строку в нижний регистр
//     5. Проверить вхождение указанного символа в строку
//     6. Подсчитать количество вхождений указанного символа в строку
//     7. Найти индекс первого вхождения подстроки в строку
//     8. Проверить входит ли указанная подстрока в строку
//     9. Перевернуть строку
//     10. Удалить из строки все знаки препинания
//     11. Сравнения строк
//     12. Конкатинации строк, то есть добавления второй строки в конец первой
//     13. Получение подстроки, состоящей из первых n символов строки, если n>=динны строки, то необходимо выдать всю строку ???

#include <iostream>

int StrLength(char* string, int count);
int CountWords(char* string, int count);
void StrUpper(char* string);
void StrLower(char* string);
bool CheckSymbol(char* string, char symbol);
int CountEntries(char* string, char symbol, int count);
int SearchFirstIndex(char* string, char* string2, int count);
bool CheckString(char* string, char* string2, int count);
void flipString(char* string, int size);
void DeleteSigns(char* string);
bool ComparisonString(char* string, char* string3, int count);
void Concatination(char* string, char* string3, char* ResultString, int count);

int main()
{
    using namespace std;
    
    int count = 0;
    int size = 20;
    char string[size];
    cout << "Enter string: "; cin.getline(string, size);
    cout << "String: " << string << endl;
    
//    cout << "Length of the string: " << StrLength(string, count) << endl;
//    cout << "Count words: " << CountWords(string, count) << endl;
//
//    StrUpper(string);
//    cout << "Upper: " << string << endl;
//    StrLower(string);
//    cout << "Lower: " << string << endl;
//
//    char symbol;
//    cout << "Enter symbol: "; cin >> symbol;
//    if(CheckSymbol(string, symbol))
//        cout << "This symbol is in the string" << endl;
//    else
//        cout << "This symbol is not in the string" << endl;
//
//    cout << "Number of entries of this symbol: " << CountEntries(string, symbol, count) << endl;
    
//    int size2 = 10;
//    char string2[size];
//    cout << "Enter string 2: "; cin.getline(string2, size2);
//    cout << "The line's index of the first entries: " << SearchFirstIndex(string, string2, count) << endl;
//    if(CheckString(string, string2, count))
//        cout << "This string is in the line" << endl;
//    else
//        cout << "This string is not in the line" << endl;
//
    
    
//    flipString(string, count);
    
    char string3[size];
    cout << "Enter string 3: "; cin.getline(string3, size);
    char ResultString[255]{};
//    DeleteSigns(string);
//    cout << "String without signs: " << string << endl;
    
    if(ComparisonString(string, string3, count))
        cout << "This strings are equal" << endl;
    else
        cout << "This string are not equal" << endl;
    
    Concatination(string, string3, ResultString, count);
    cout << "Concatinated string: " << ResultString << endl;
    
    
    return 0;
}

int StrLength(char* string, int count)
{
    while(*string)
    {
        return StrLength(string + 1, count + 1);
    }
    return count;
}
int CountWords(char* string, int count)
{
    while(*string)
    {
        if(*string == ' ')
            count++;
        return CountWords(string + 1, count);
    }
    count ++;
    return count;
}

void StrUpper(char* string)
{
    while(*string)
    {
        if(*string >= 'a' && *string <= 'z')
            *string -= 32;
        return StrUpper(string + 1);
    }
}
void StrLower(char* string)
{
    while(*string)
    {
        if(*string >= 'A' && *string <= 'z')
            *string += 32;
        return StrLower(string + 1);
    }
}

bool CheckSymbol(char* string, char symbol)
{
    while(*string)
    {
        if(*string == symbol)
            return true;
        return CheckSymbol(string + 1, symbol);
    }
    return false;
}

int CountEntries(char* string, char symbol, int count)
{
    while(*string)
    {
        if(*string == symbol)
            count ++;
        return CountEntries(string + 1, symbol, count);
    }
    return count;
}

int SearchFirstIndex(char* string, char* string2, int count)
{
  bool flag = false;
  for (int i = 0; string[i]; ++i)
  {
    if (string[i] == *string)
    {
      count = i;
      flag = true;
      for (int j = 0; string2[j]; ++j)
      {
        if (string[i + j] != string2[j])
        {
          flag = false;
          break;
        }
      }

      if (flag == true)
      {
        return count;
      }
    }
  }
  return -1;
}

bool CheckString(char* string, char* string2, int count)
{
    bool flag = false;
    for (int i = 0; string[i]; ++i)
    {
        if(string[i] == *string2)
        {
            count = i;
            flag = true;
            for(int j = 0; string2[j]; ++j)
            {
                if(string[i + j] != string2[j])
                {
                    flag = false;
                    break;
                }
            }
        }
    }
    
    if(flag)
        return true;
    else
        return false;
}

void flipString(char* string, int count)
{
    for(int i = StrLength(string, count) - 1; i >= 0; --i)
    {
        std::cout << *(string + i);
    }
    std::cout << std::endl;
}

void DeleteSigns(char* string)
{
    for (int i = 0; string[i]; ++i)
    {
        if(string[i] == '.' || string[i] == ',')
        {
            string[i] = ' ';
        }
    }
}

bool ComparisonString(char* string, char* string3, int count)
{
    while(*string)
    {
        if(*string != *string3)
        {
            return false;
        }
        return ComparisonString(string + 1, string3 + 1, count);
    }
    return true;
}

//void Concatination(char* string, char* string3, char* ResultString)
//{
//    while(*string)
//    {
//        *ResultString = *string;
//        return Concatination(string + 1, string3, ResultString + 1);
//    }
//    while(*string3)
//    {
//        *ResultString = *string3;
//        return Concatination(string, string3 + 1, ResultString + 1);
//    }
//}

void Concatination(char* string, char* string3, char* ResultString, int count)
{
    for (int i = 0; string[i]; ++i)
    {
        ResultString[i] = string[i];
    }
    for (int i = 0; string3[i]; ++i)
    {
        ResultString[i + StrLength(string, count)] = string3[i];
    }
}
