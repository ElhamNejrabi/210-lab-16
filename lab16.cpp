#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Color {
private:
    int red;
    int green;
    int blue;
    static int clamp(int v) {
        if (v < 0) return 0;
        if (v > 255) return 255;
        return v;
    }
public:
    Color() : red(0), green(0), blue(0) {}
    Color(int r, int g, int b) : red(clamp(r)), green(clamp(g)), blue(clamp(b)) {}
    Color(int r, int g) : red(clamp(r)), green(clamp(g)), blue(0) {}
    explicit Color(int gray) : red(clamp(gray)), green(clamp(gray)), blue(clamp(gray)) {}
    void setRed(int r) { red = clamp(r); }
    void setGreen(int g) { green = clamp(g); }
    void setBlue(int b) { blue = clamp(b); }
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
    Color cYellow(255, 255);
    Color cGray(128);
    Color cCopy = cRed;
    Color cTeal{0, 128, 128};
    cout << "===== Color Objects =====\n";
    cDefault.print("custom");
    cRed.print("red");
    cGreen.print("green");
    cBlue.print("blue");
    cYellow.print("yellow");
    cGray.print("gray");
    cCopy.print("copy of red");
    cTeal.print("teal");
    return 0;
}
