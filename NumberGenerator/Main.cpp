#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <cstdio> 

int main() {
    srand(static_cast<unsigned int>(time(NULL)));
    int randomNumber = rand() % 100 + 1;
    wchar_t message[50];
    swprintf_s(message, L"Random Number: %d", randomNumber);
    MessageBox(NULL, message, L"Random Number Generator", MB_OK | MB_ICONINFORMATION);

    return 0;
}
