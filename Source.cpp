#include <iostream>
using namespace std;

class CPU
{
	char* model;
	int cores;
public:
	CPU(const char* m, int c)
	{
		model = new char[strlen(m) + 1];
		strcpy_s(model, strlen(m) + 1, m);
		cores = c;
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
};
class SDD
{
	char* brand;
	int capacity;
public:
	SDD(const char* b, int cap)
	{
		brand = new char[strlen(b) + 1];
		strcpy_s(brand, strlen(b) + 1, b);
		capacity = cap;
	}
	void PrintSDD()
	void PrintSDD() const
	{
		cout << "SDD brand: " << brand << endl;
		cout << "SDD capacity: " << capacity << endl;
	}
	~SDD()
	{
		delete[]brand;
	}
};
class VideoCard
{
	char* model;
	int memory;
public:
	VideoCard(const char* m, int mem)
	{
		model = new char[strlen(m) + 1];
		strcpy_s(model, strlen(m) + 1, m);
		memory = mem;
	}
	void PrintVideoCard()
	void PrintVideoCard() const
	{
		cout << "Video Card: " << model << endl;
		cout << "Memory of Video Card: " << memory << " GB" << endl;
	}
	~VideoCard()
	{
		delete[]model;
	}
};
class RAM
{
	char* type;
	int memory;
public:
	RAM(const char* t, int mem)
	RAM(const char* t, int mem)
	{
		type = new char[strlen(t) + 1];
		strcpy_s(type, strlen(t) + 1, t);
		memory = mem;
	}
	void PrintRAM() const
	{
		cout << "Video Card: " << type << endl;
		cout << "Memory of Video Card: " << memory << " GB" << endl;
	}
	~RAM()
	{
		type = new char[strlen(t) + 1];
		strcpy_s(type, strlen(t) + 1, t);
		memory = mem;
		delete[]type;
	}
	void PrintRAM()
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
	Laptop(const char* b, const char* col, int p, const char* cpu_m, int cpu_c, const char* sdd_b, int sdd_cap, const char* videoCard_m, int videoCard_mem, const char* ram_t, int ram_mem) : price(p), cpu(cpu_m, cpu_c), sdd(sdd_b, sdd_cap), videoCard(videoCard_m, videoCard_mem), ram(ram_t, ram_mem)
	{
		cout << "Video Card: " << type << endl;
		cout << "Memory of Video Card: " << memory << " GB" << endl;
		brand = new char[strlen(b) + 1];
		strcpy_s(brand, strlen(b) + 1, b);
		color = new char[strlen(col) + 1];
		strcpy_s(color, strlen(col) + 1, col);
		count++;
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
	~RAM()
	{
		delete[]type;

	static int GetCount() {
		return count;
		eng.PrintEngine();
		c.PrintCond();
	}
};
class Laptop {
	int count = 0;
	char* brand;
	char* color;
	int price;
	CPU cpu;
	SDD sdd;
	VideoCard videoCard;
	RAM ram;
public:
	Laptop(const char* b, const char* col, int p, const char* cpu_m, int cpu_c, const char* sdd_b, int sdd_cap, const char* videoCard_m, int videoCard_mem, const char* ram_t, int ram_mem): price(p), cpu(cpu_m, cpu_c), sdd(sdd_b, sdd_cap), videoCard(videoCard_m, videoCard_mem), ram(ram_t, ram_mem)
	{
		brand = new char[strlen(b) + 1];
		strcpy_s(brand, strlen(b) + 1, b);
		color = new char[strlen(col) + 1];
		strcpy_s(color, strlen(col) + 1, col);
		count++;
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
int main()
{
	Laptop laptop1("Dell", "Black", 1200, "Intel i7", 8, "Samsung", 512, "NVIDIA GTX 1650", 4, "DDR4", 16);
	laptop1.PrintLaptop();
}
int Laptop::count = 0;

	int main()
	{
		Laptop laptop1("Dell", "Black", 1200, "Intel i7", 8, "Samsung", 512, "NVIDIA GTX 1650", 4, "DDR4", 16);
		Laptop laptop2("HP", "Silver", 1000, "AMD Ryzen 5", 6, "Kingston", 256, "AMD Radeon RX 550", 2, "DDR4", 8);
		Laptop laptop3("Apple", "Gray", 2500, "M1", 8, "Apple SSD", 1024, "Apple GPU", 16, "LPDDR4X", 16);

		laptop1.PrintLaptop();
		laptop2.PrintLaptop();
		laptop3.PrintLaptop();

		cout << "Number of laptops: " << Laptop::GetCount() << endl;

		return 0;
	}}