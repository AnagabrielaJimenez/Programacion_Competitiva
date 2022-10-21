#include <iostream>

using namespace std;

bool es_igual(char actu[][10], char camb[][10], int n)
{
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (actu[i][j] != camb[i][j]) {
        return false;
      }
    }
  }

  return true;
}

void cambio(char camb[][10], int n)
{
  char tmp[10][10];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      tmp[i][j] = camb[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      camb[i][j] = tmp[n-j-1][i];
    }
  }
}

void reflejo(char camb[][10], int n)
{
  char tmp[10][10];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      tmp[i][j] = camb[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      camb[i][j] = tmp[n-i-1][j];
    }
  }
}

int main()
{
  int n;
  char c;
  int pat = 0;
  char actu[10][10];
  char camb[10][10];

  while (cin >> n) {
    pat++;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> actu[i][j];
      }

      for (int j = 0; j < n; j++) {
        cin >> camb[i][j];
      }
    }

    if (es_igual(actu, camb, n)) {
      cout << "Pattern " << pat << " was preserved." << endl;
      continue;
    }

    cambio(actu, n);
    if (es_igual(actu, camb, n)) {
      cout << "Pattern " << pat << " was cambiod 90 degrees." << endl;
      continue;
    }

    cambio(actu, n);
    if (es_igual(actu, camb, n)) {
      cout << "Pattern " << pat << " was cambiod 180 degrees." << endl;
      continue;
    }

    cambio(actu, n);
    if (es_igual(actu, camb, n)) {
      cout << "Pattern " << pat << " was cambiod 270 degrees." << endl;
      continue;
    }

    cambio(actu, n);

    reflejo(actu, n);
    if (es_igual(actu, camb, n)) {
      cout << "Pattern " << pat << " was reflejoed vertically." << endl;
      continue;
    }

    cambio(actu, n);
    if (es_igual(actu, camb, n)) {
      cout << "Pattern " << pat << " was reflejoed vertically and cambiod 90 degrees." << endl;
      continue;
    }

    cambio(actu, n);
    if (es_igual(actu, camb, n)) {
      cout << "Pattern " << pat << " was reflejoed vertically and cambiod 180 degrees." << endl;
      continue;
    }

    cambio(actu, n);
    if (es_igual(actu, camb, n)) {
      cout << "Pattern " << pat << " was reflejoed vertically and cambiod 270 degrees." << endl;
      continue;
    }

    cout << "Pattern " << pat << " was improperly transformed." << endl;
  }
  
  return 0;
}