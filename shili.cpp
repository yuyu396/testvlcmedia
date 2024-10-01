// shili.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

using namespace std
/*typedef int* yu*/;
//int add(int& a, int& b)
//{
//    a = a + b;
//    return a;
//}

//int add(int& a, int& b)
//{
//    a = a + b;
//    return a;
//}

unsigned int fac(unsigned int n)
{
    unsigned int f;
    if (n==0)
    {
        f = 1;
    }
    else
    {
        f = fac(n-1) * n;
    }
    return f;
}
inline double  calarea(int a)
{
    return 3.14 * a * a;
}

int add2(int c,int a=1, int b=2)
{
    a = a + b;
    return a;
}

int add2(int a , int b = 2)
{
    a = a + b;
    return a;
}

class clock
{
public:
    clock(int a, int b, int c);//:d(a), h(b), m(c) {};
    clock();//:clock(0, 0, 0) {};
    int d, h, m;
    clock(clock &a);
protected:
private:
};
clock::clock(int a, int b, int c) :d(a), h(b), m(c) {}
clock::clock():clock(0, 0, 0) {}
clock::clock(clock& a) { d = a.d; h = a.h; m = a.m; }
//int m_friend;
class point
{
public:
    point(int x = 0, int y = 0) :x(x), y(y) {};
    friend float dist(point a, point b);
    friend class clock;
    //friend m_friend;
private:
    int x, y;
};
float dist(point a, point b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

class deepcopy
{
public:
    int* p;
    deepcopy()
    {
        cout << "默认构造函数" << endl;
      
    }
    deepcopy(int a)
    {
        cout << "带参构造函数" << endl;
        p = new int(a);
    }
    ~deepcopy()
    {
        cout << "析构函数" << endl;
        //delete p ;
    }
    deepcopy(const deepcopy& a)
    {
        cout << "拷贝构造函数" << endl;
        //p = new int(*a.p);
    }
};
void trans(deepcopy a)
{}
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int (*fun)(int a, int b);
//ponit::ponit(int x = 0, int y = 0) :x(x), y(y) {}
// 
// 

//int* p = new int [3];
//int** p2 = new int* [3];
//(*p2)[1] = new int [2];


class building;

class person
{
public:
    person();
    ~person();
    void look();
    building* pb;
    int data;
private:

};
class building
{
    friend void person::look();

private:
    int bedroom = 10;
};
person::person()
{
    pb = new building;
}

person::~person()
{
}

void person::look()
{
    cout << pb->bedroom;
}

class my
{
public:
    int a, b;
    int* p = new int[3];
    //my operator+ (my& a)
    //{
    //    my p3;
    //    p3.a = this->a + a.a;
    //    p3.b = this->b + a.b;
    //    return p3;
    //}

    my& operator++ ()
    {
        a++; b++;
        return *this;
    }
    my operator++ (int)
    {
        my temp = *this;
        a++; b++;
        return temp;
    }

    my operator- (my a)
    {
        my p3;
        p3.a = this->a - a.a;
        p3.b = this->b - a.b;
        return p3;
    }

    int& operator[] (int index)
    {
        return p[index];
    }
};

class animal
{
public:
   virtual void dospeak()
    {
        cout << "animal spaeking";
    }
};

class cat:public animal
{
public:
     void dospeak()
    {
        cout << "cat spaeking";
    }
};

class dog :public animal
{
     void dospeak()
    {
        cout << "dog speaking";
    }
};

void dospeak(animal& a)
{
    a.dospeak();
}
//my operator+ (my a, my b)
//{
//    my p3;
//    p3.a = b.a + a.a;
//    p3.b = b.b + a.b;
//    return p3;
//}

//ostream& operator<<(ostream &cout, my a)
//{
//    cout << a.a << endl;
//    cout << a.b << endl;
//    return cout;
//}


ostream& operator<< (ostream& cout, my a)
{
    cout << a.a << endl;
    cout << a.b << endl;
    return cout;
}

class myname
{
public:
    char name[64];
    int year;
    int a, b;
};

template <class T>
void swap2(T& a, T& b)
{
    T temp = b;
     b =  a;
     a = temp;

}


template<> void swap2(myname& a, myname& b)
{
    myname  temp;
    temp.a = a.a; temp.b = a.b;
    a.a = b.a; a.b = b.a;
    b.a = temp.a; b.b = temp.a;
}

template <typename a>
class MyClass
{
public:
    MyClass()
    {
        y = 980;
    }

    virtual ~MyClass()
    {
    }
    a yu, y;

private:

};


#include<vector>


void out(int a)
{
    cout << a << endl;
}

double chu(int a, int b)
{
    if (b == 0)
    {
        throw runtime_error("无法除以零!");
    }
    else
    {
        return a / b;
    }

}
class arr
{
public:
    int yu[5] = { 1,2,3,4,5 };
    arr()
    {
       
    }
    int operator[] (int index)
    {
        return yu[index];
    }
};

class B1
{
public:
    B1(int a) 
    {
        cout << "constructing B1" << a << endl;
    }
    ~B1()
    {
        cout << "deconst B1"  << endl;
    }

private:

};

class B2
{
public:
    B2(int a) 
    {
        cout << "constructing B2" << a << endl;
    }
    B2(B2& a)
    {
        cout << "copy constructing B2"<< endl;
    }
    ~B2() 
    {
        cout << "deconst B2" << endl;
    }

private:

};

class C
{
public:
    C(int a, B2 b, int c, int d) :memerB1(a), memerB2(b) {};
    

private:
    B1 memerB1;
    B2 memerB2;
};

int main()
{
    int a;
    float b;
    double c;
    double ui;
    /*B2 bu(3);
    C yu(1, bu, 3, 4);*/
    //arr iou;
    //cout << iou[3];
    //int a = 1, b = 0;
    //try
    //{
    //    chu(a, b);
    //}
    //catch (runtime_error a)
    //{
    //    cout << a.what();
    //}

     

  /*  vector<int> shuzu;
    shuzu.push_back(10);
    shuzu.push_back(20);
    shuzu.push_back(30);

    vector<int>::iterator itbegin = shuzu.begin();
    vector<int>::iterator itend = shuzu.end();

    while (itbegin != itend)
    {
        cout << *itbegin << endl;
        itbegin++;
    }

    for (vector<int>::iterator i = shuzu.begin(); i < shuzu.end(); i++)
    {
        cout << *i << endl;
       
    }*/

  
  
    /*MyClass<int> a4;
    cout << a4.y << endl;

    int  a = 10, b = 20;

    myname mn1 = {"ywz",18,10,20};
    myname mn2 = { "ywz",18,40,40 };
    swap2<myname>(mn1, mn2);

    swap2(a, b);
    cout << a << b<< endl;
    cout << mn2.a << mn2.b << endl;
   */

    //ofstream out;
    //out.open("C:\\Users\\HP\\Desktop\\ywzctest.txt", ios::out | ios::binary);
    //myname ywz = { "余文政",18 };
    //out.write((const char*)&ywz, sizeof(ywz));
    //out.close();


    //ifstream in;
    //in.open("C:\\Users\\HP\\Desktop\\ywzctest.txt", ios::in | ios::binary);
    //char buf[1024];
    //in.read(buf, sizeof(ywz));
    //myname *yu = (myname*)buf;

    //cout << (*(myname*)buf).name << endl << (*(myname*)buf).year;



   /* ofstream out;
    out.open("C:\\Users\\HP\\Desktop\\ywzctest.txt", ios::out);
    out << "姓名：ywz" << endl << "学号：" << endl;
    out.close();


    ifstream in;
    in.open("C:\\Users\\HP\\Desktop\\ywzctest.txt", ios::in);
    if(in.is_open() == 1)
    {
        cout << "打开成功！" << endl;
    }
    else
    {
        cout << "打开失败！" << endl;
    }*/


    //读文件》》》》》》》》》》》》》》》》》》》》》》》》》》》
  //  char buf[1024] = { 0 };
 /*   in >> buf;
    cout << buf << endl;
    while (in >> buf)
    {
        cout << buf << endl;
    }*/

    //读文件geline方式
    //while ( in.getline(buf, sizeof(buf)) )
    //{
    //    cout << buf <<endl;
    //} 

    //读文件string方式
    //string sbuf;
    //getline(in, sbuf);
    //cout << sbuf << endl;

    //读文件char方式
    //char t = NULL;
    //while ( t != EOF)
    //{
    //   t = in.get();
    //    cout << t ;
    //}


    //cat cat1;
    //dog dog1;

   // dospeak(dog1);
 /*   my p1, p2,p3;
    p1.a = 10, p1.b = 10;
    p2.a = 20, p2.b = 20;
    p3 = p1 - p2;
    cout << p3.a << endl << p3.b << endl;

    cout << ++p3 <<"hello";
    cout << p3 << "hello";*/




//    int* p = new int [3];
//   int** p2 = new int* [3];
//p2[0] = new int [2];
//
//    const int rows = 3;
//    const int cols = 4;
//    // 创建一个指针数组
//    int** arr = new int* [rows]; // 创建指向整数指针的指针
//    // 为每一行分配内存
//    for (int i = 0; i < rows; i++) {
//        arr[i] = new int[cols]; // 为每一行分配一个整数数组
//    }

   // p2[0][0] = 1;


    //deepcopy a;
    //deepcopy b(a);
    //trans(b);


    //fun = add;
    //cout << fun(2, 3) << endl;
    //fun = sub;
    //cout << fun(3, 3) << endl;


    //deepcopy p1(18);
    //deepcopy p2(p1);

    //enum color {red,green,black}d=red,c=green;
    //int b = 10;
    //yu a;
    //a = &b;
    
    //std::cout << "Hello World!\n"<<a;
    /*int c = 10, d = 10;
    add(c, d);*/
    //cout << c<< d<<"\n" << sqrt(4) << endl;

   /* unsigned int seed;
    cin >> seed;
    srand(seed);
    cout << rand() << endl;*/


    //int a = 0;
    //cin >> a;
    //cout << fac(a);

    //cout << calarea(2);

    //cout << add2(2,10,10);

 /*   class clock a(1,2,3);
    cout << a.d << a.h << a.m<<endl;
    class clock b=a;
    cout << b.d << b.h << b.m <<endl;*/

    //point a(1, 1), b(2, 2);
    //
    //cout<< dist(a, b);

  /*  int arr2[][2] = { 1,2,3,4 };
    cout << arr2 <<endl<<sizeof(arr2)<<endl<<arr2[1] << endl << *(&arr2[1][0]+1);*/

    //int  a = 9,b=8;
    //const int* p = &a;
    //p = &b;
    //int* const p2 = &a;



}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
