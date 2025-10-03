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
    Color(int r, int g) : red(r), green(g), blue(0) {}
    explicit Color(int gray) : red(gray), green(gray), blue(gray) {}
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
    cDefault.setRed(80);
    cDefault.setGreen(160);
    cDefault.setBlue(240);
    Color cRed(255, 0, 0);
    Color cYellow(255, 255);
    Color cGray(128);
    cout << "===== Color Objects =====\n";
    cDefault.print("custom");
    cRed.print("red");
    cYellow.print("yellow");
    cGray.print("gray");
    return 0;
}
