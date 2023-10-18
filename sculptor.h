#ifndef SCULPTOR_H
#define SCULPTOR_H
#include "voxel.h"

class Sculptor {
private:
  Voxel ***v; // 3D matrix
  int nx,ny,nz; // Dimensions
  float r,g,b,a; // Current drawing color
public:
  Sculptor(int _nx, int _ny, int _nz); // Construtor
  ~Sculptor(); // Destrutor
  void setColor(float r, float g, float b, float a); // Define a cor
  void putVoxel(int x, int y, int z); // Cria um voxel 
  void cutVoxel(int x, int y, int z); // Corta um voxel
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1); // Cria uma caixa
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1); // Corta uma caixa
  void putSphere(int xcenter, int ycenter, int zcenter, int radius); // Coloca um esfera
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius); // Corta a esfera
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz); // Coloca uma elipsoide
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz); // Corta a elipsoide
  void writeOFF(const char* filename); // Escreve o modelo em formato OFF
};
#endif