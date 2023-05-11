#include "CoherentHashing.h"
#include "Data Structures/Vector.h"

int main() {
    CoherentHashing *hash = new CoherentHashing();
    Vector<int> vector(10*2);

    hash->generateRandomNumbers(vector);

    return 0;
}
