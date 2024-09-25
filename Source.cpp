#include <iostream>
using namespace std;

class CPU
{
	char* model;
	int cores;
public:
	CPU() {
		char* model;
		int cores;
	}
	CPU(const char* m, int c)
	{
		model = new char[strlen(m) + 1];
		strcpy_s(model, strlen(m) + 1, m);
		cores = c;
	}
	CPU(const CPU& obj)
	{
		model = new char[strlen(obj.model) + 1];
		strcpy_s(model, strlen(obj.model) + 1, obj.model);
		cout << "CPU COPY CONSTRUCTOR" << endl;
	}

	void PrintCPU() const
	{
		cout << "CPU model: " << model << endl;
		cout << "CPU cores number: " << cores << endl;
	}
	~CPU()
	{
		delete[]model;
	}
	char* GetModel() const
	{
		return model;
	}
	void SetModel(const char* m)
	{
		if (model != nullptr)
			delete[]model;
		model = new char[strlen(m) + 1];
		strcpy_s(model, strlen(m) + 1, m);
	}
};
class SDD
{
	char* brand;
	int capacity;
public:
	SDD()
	{
		char* brand;
		int capacity;
	}
	SDD(const char* b, int cap)
	{
		brand = new char[strlen(b) + 1];
		strcpy_s(brand, strlen(b) + 1, b);
		capacity = cap;
	}
	SDD(const SDD& obj)
	{
		brand = new char[strlen(obj.brand) + 1];
		strcpy_s(brand, strlen(obj.brand) + 1, obj.brand);
		cout << "SDD COPY CONSTRUCTOR" << endl;
	}
	void PrintSDD() const
	{
		cout << "SDD brand: " << brand << endl;
		cout << "SDD capacity: " << capacity << endl;
	}
	~SDD()
	{
		delete[]brand;
	}
	char* GetBrand() const
	{
		return brand;
	}
	void SetBrand(const char* b)
	{
		if (brand != nullptr)
			delete[]brand;
		brand = new char[strlen(b) + 1];
		strcpy_s(brand, strlen(b) + 1, b);
	}
};
class VideoCard
{
	char* model;
	int memory;
public:
	VideoCard() {
		char* model;
		int memory;
	}
	VideoCard(const char* m, int mem)
	{
		model = new char[strlen(m) + 1];
		strcpy_s(model, strlen(m) + 1, m);
		memory = mem;
	}
	VideoCard(const VideoCard& obj)
	{
		model = new char[strlen(obj.model) + 1];
		strcpy_s(model , strlen(obj.model) + 1, obj.model);
		cout << "VIDEO CARD COPY CONSTRUCTOR" << endl;
	}
	void PrintVideoCard() const
	{
		cout << "Video Card: " << model << endl;
		cout << "Memory of Video Card: " << memory << " GB" << endl;
	}
	~VideoCard()
	{
		delete[]model;
	}
	char* GetModel() const
	{
		return model;
	}
	void SetModel(const char* m)
	{
		if (model != nullptr)
			delete[]model;
		model = new char[strlen(m) + 1];
		strcpy_s(model, strlen(m) + 1, m);
	}
};
class RAM
{
	char* type;
	int memory;
public:
	RAM() {
		char* type;
		int memory;
	}
	RAM(const char* t, int mem)
	{
		type = new char[strlen(t) + 1];
		strcpy_s(type, strlen(t) + 1, t);
		memory = mem;
	}
	RAM(const RAM& obj)
	{
		type = new char[strlen(obj.type) + 1];
		strcpy_s(type, strlen(obj.type) + 1, obj.type);
		cout << "RAM COPY CONSTRUCTOR" << endl;
	}
	void PrintRAM() const
	{
		cout << "RAM type: " << type << endl;
		cout << "Memory of RAM: " << memory << " GB" << endl;
	}
	~RAM()
	{
		delete[]type;
	}
	char* GetType() const
	{
		return type;
	}
	void SetType(const char* t)
	{
		if (type != nullptr)
			delete[]type;
		type = new char[strlen(t) + 1];
		strcpy_s(type, strlen(t) + 1, t);
	}
};

class Laptop {
	static int count;
	char* brand;
	char* color;
	int price;
	CPU cpu;
	SDD sdd;
	VideoCard videoCard;
	RAM ram;
public:
	Laptop() {
		brand = nullptr;
		color = nullptr;
		price = 0;
	}
	Laptop(const char* b, const char* col, int p, const char* cpu_m, int cpu_c, const char* sdd_b, int sdd_cap, const char* videoCard_m, int videoCard_mem, const char* ram_t, int ram_mem) : price(p), cpu(cpu_m, cpu_c), sdd(sdd_b, sdd_cap), videoCard(videoCard_m, videoCard_mem), ram(ram_t, ram_mem)
	{
		brand = new char[strlen(b) + 1];
		strcpy_s(brand, strlen(b) + 1, b);
		color = new char[strlen(col) + 1];
		strcpy_s(color, strlen(col) + 1, col);
		count++;
	}
	Laptop(const Laptop& otherLaptop) : price(otherLaptop.price), cpu(otherLaptop.cpu), sdd(otherLaptop.sdd), videoCard(otherLaptop.videoCard), ram(otherLaptop.ram)
	{
		this->brand = new char[strlen(otherLaptop.brand) + 1];
		strcpy_s(this->brand, strlen(otherLaptop.brand) + 1, otherLaptop.brand);
		this->color = new char[strlen(otherLaptop.color) + 1];
		strcpy_s(this->color, strlen(otherLaptop.color) + 1, otherLaptop.color);
		cout << "COPY CONSTRUCTOR" << endl;
		cpu.SetModel(otherLaptop.cpu.GetModel());
		sdd.SetBrand(otherLaptop.sdd.GetBrand());
		videoCard.SetModel(otherLaptop.videoCard.GetModel());
		ram.SetType(otherLaptop.ram.GetType());
	}
	~Laptop() {
		delete[] brand;
		delete[] color;
		count--;
	}

	void PrintLaptop() const {
		cout << "Laptop brand: " << brand << endl;
		cout << "Price: " << price << "$" << endl;
		cout << "Color : " << color << endl;
		cpu.PrintCPU();
		sdd.PrintSDD();
		videoCard.PrintVideoCard();
		ram.PrintRAM();
		cout << "-------------------------------" << endl;
	}

	static int GetCount() {
		return count; 
	}
};
int Laptop::count = 0;

	int main()
	{
		Laptop laptop1("Dell", "Black", 1200, "Intel i7", 8, "Samsung", 512, "NVIDIA GTX 1650", 4, "DDR4", 16);
		laptop1.PrintLaptop();
		Laptop laptop2 = laptop1;
		laptop2.PrintLaptop();
		Laptop laptop3 = laptop1;
		laptop3.PrintLaptop();

		cout << "Number of laptops: " << Laptop::GetCount() << endl;

		return 0;
	}