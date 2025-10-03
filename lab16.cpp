#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Color {
private:
    int red;
    int green;
    int blue;
public:
    Color() : red(0), green(0), blue(0) {}
    Color(int r, int g, int b) : red(r), green(g), blue(b) {}
    void setRed(int r) { red = r; }
    void setGreen(int g) { green = g; }
    void setBlue(int b) { blue = b; }
    int getRed() const { return red; }
    int getGreen() const { return green; }
    int getBlue() const { return blue; }
    void print(const string& name = "") const {
        cout << left << setw(12) << (name.empty() ? "Color" : name)
             << " -> R: " << setw(3) << red
             << " G: " << setw(3) << green
             << " B: " << setw(3) << blue << endl;
    }
};

int main() {
    Color cDefault;
    cDefault.setRed(100);
    cDefault.setGreen(150);
    cDefault.setBlue(200);
    Color cRed(255, 0, 0);
    Color cGreen(0, 255, 0);
    Color cBlue(0, 0, 255);
    Color cGray(128, 128, 128);
    cout << "===== Color Objects =====\n";
    cDefault.print("custom");
    cRed.print("red");
    cGreen.print("green");
    cBlue.print("blue");
    cGray.print("gray");
    return 0;
}
