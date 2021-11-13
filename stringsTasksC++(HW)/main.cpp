//Реализовать следующие функции для работы со строками:
//PART1
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

//PART 2
//bool is_palindrome(char str[]);    DONE //Проверяет, является ли строка палиндромом (ого, или, 12321)
//    bool is_int_number(char str[]);    DONE //Проверяет, является ли строка целым десятичным числом
//    int  to_int_number(char str[]);    //Если строка - десятичное число, то функция возвращает его int-овое значение.
//    bool is_bin_number(char str[]);    //Проверяет, является ли строка двоичным числом
//    int  bin_to_dec(char str[]);    //Если строка - двоичное число, то функция возвращает его десятичное значение.
//    bool is_hex_number(char str[]);    //Проверяет, является ли строка шестнадцатеричным числом
//    int  hex_to_dec(char str[]);    //Если строка - шестнадцатеричное число, то функция возвращает его десятичное значение.
//    bool is_mac_address(char str[]);//Проверяет, является ли строка MAC-адресом
//    bool is_ip_address(char str[]);//Проверяет, является ли строка IP-адресом

#include <iostream>
#include <cmath>
//#define PART_1
#define PART_2


// Part 1
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
void Concatenation(char* string, char* string3, char* ResultString, int count);
// Part 2
bool is_palindrome(char str[]);
bool is_int_number(char str[]);
int  to_int_number(char str[], int n);    //Если строка - десятичное число, то функция возвращает его int-овое значение.
bool is_bin_number(char str[]);    //Проверяет, является ли строка двоичным числом
int  bin_to_dec(char str[]);    //Если строка - двоичное число, то функция возвращает его десятичное значение.
bool is_hex_number(char str[]);    //Проверяет, является ли строка шестнадцатеричным числом
int  hex_to_dec(char str[]);    //Если строка - шестнадцатеричное число, то функция возвращает его десятичное значение.
bool is_mac_address(char str[]); //Проверяет, является ли строка MAC-адресом
bool is_ip_address(char str[]); //Проверяет, является ли строка IP-адресом

int main()
{
    using namespace std;
  
#ifdef PART_1
    
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
    
    Concatenation(string, string3, ResultString, count);
    cout << "Concatenated string: " << ResultString << endl;
    
#endif
#ifdef PART_2
    
    int size = 255;
    char str[size];
    
    cout << "Enter string: "; cin.getline(str, size);
    
    if(is_palindrome(str))
        cout << "This string is palindrome"  << endl;
    else
        cout << "This string is not palindrome" << endl;
    
    if(is_int_number(str))
        cout << "This is a number" << endl;
    else
        cout << "This is not a number" << endl;
    
    if(is_bin_number(str))
        cout << "This is a bin number" << endl;
    else
        cout << "This is not a bin number" << endl;
    
    if(is_hex_number(str))
        cout << "This is a hex number" << endl;
    else
        cout << "This is not a hex number" << endl;
    
    if(is_mac_address(str))
        cout << "This is a mac adress" << endl;
    else
        cout << "This is not a mac adress" << endl;
    
    
    if(is_ip_address(str))
        cout << "This is an IP adress" << endl;
    else
        cout << "This is not an IP adress" << endl;
    

#endif
    
    return 0;
}
// Part 2


bool is_palindrome(char* str)
{
    size_t tmp = strlen(str) - 1;
    StrLower(str);
    for (int i = 0, j = tmp; i <= tmp && j >= 0; ++i, --j)
    {
        if(str[i] != str[j])
            return false;
    }
    return true;
}

bool is_int_number(char* str)
{
    while(*str)
    {
        if(!(*str >= '0' && *str <= '9'))
            return false;
        return is_int_number(str + 1);
    }
    return true;
}
int to_int_number(char* str, int n)
{
    int number = 0;
    int count = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        number += (str[i] - 48) * pow(10, count);
        ++count;
    }
    return number;
}

bool is_bin_number(char* str)
{
    if(!(str[0] == '0' && str[1] == 'b'))
    {
        return false;
    }
    for (int i = 2; str[i]; ++i)
    {
        if(!(str[i] >= '0' && str[i] <= '1'))
            return false;
    }
    return true;
}

int bin_to_dec(char* str)
{
    int n = 0;
    int  number = 0;
    int count = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        if(str[i] == 49)
        {
            number += pow(2, count);
            ++count;
        }
    }
    return number;
}
bool is_hex_number(char* str)
{
    if(!(str[0] == '0' && str[1] == 'x'))
    {
        return false;
    }
    
    for (int i = 2; str[i]; ++i)
    {
        if(!((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f')))
        {
            return false;
        }
    }
    return true;
}

bool is_mac_address(char* str)
{
    int n = 0;
    if (!(str[n - 5] == '.' && str[n - 10] == '.' && n == 14))
    {
            return false;
    }
    for (int i = n - 1; i >= 0; --i)
    {
        if (!((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= '.')))
        {
            return false;
        }

    }
    return true;
}
bool is_ip_address(char* str)
{
    const int size = 3;
    int n = 0;
    int newSize = 0;
    size_t counter = 0;
    size_t index = 0;
    size_t index2 = 0;
    bool check = true;
    char tmpStr1[size];
    char tmpStr2[size];
    char tmpStr3[size];
    char tmpStr4[size];


       if (n < 16 && n>6) {
           for (int i = 0; i < n; ++i) {
               if (!((str[i] >= '0' && str[i] <= '9') || str[i] == '.')) {
                   check = false;
               }
           }

           if (check) {

               for (int i = 0; str[i] != '.'; ++i) {
                   tmpStr1[i] = str[i];
                   index = i;
                   ++index2;
               }
               newSize = index2;
               if (to_int_number(tmpStr1, newSize) >= 0 && to_int_number(tmpStr1, newSize) < 256) {
                   ++counter;
               };

               index2 = 0;

               for (int i = index + 2, j = 0; str[i] != '.'; ++i, ++j) {
                   tmpStr2[j] = str[i];
                   index = i;
                   ++index2;
               }
               newSize = index2;
               if (to_int_number(tmpStr2, newSize) >= 0 && to_int_number(tmpStr2, newSize) < 256) {
                   ++counter;
               };

               index2 = 0;

               for (int i = index + 2, j = 0; str[i] != '.'; ++i, ++j) {
                   tmpStr3[j] = str[i];
                   index = i;
                   ++index2;
               }
               newSize = index2;
               if (to_int_number(tmpStr3, newSize) >= 0 && to_int_number(tmpStr3, newSize) < 256) {
                   ++counter;
               };

               index2 = 0;

               for (int i = index + 2, j = 0; (str[i] >= '0' && str[i] <= '9'); ++i, ++j) {
                   tmpStr4[j] = str[i];
                   ++index2;
               }
               newSize = index2;
               if (to_int_number(tmpStr4, newSize) >= 0 && to_int_number(tmpStr4, newSize) < 256) {
                   ++counter;
               };


               if (counter == 4) {
                   return true;
               }
           }
       }
       return false;
}



// Part 1

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

void Concatination(char* string, char* string3, char* ResultString)
{
    while(*string)
    {
        *ResultString = *string;
        return Concatination(string + 1, string3, ResultString + 1);
    }
    while(*string3)
    {
        *ResultString = *string3;
        return Concatination(string, string3 + 1, ResultString + 1);
    }
}

//void Concatenation(char* string, char* string3, char* ResultString, int count)
//{
//    for (int i = 0; string[i]; ++i)
//    {
//        ResultString[i] = string[i];
//    }
//    for (int i = 0; string3[i]; ++i)
//    {
//        ResultString[i + StrLength(string, count)] = string3[i];
//    }
//}
