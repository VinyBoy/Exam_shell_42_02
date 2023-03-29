//En C il y a 6 operateur permettant de manipuler des bits
// 1)et "&"
// 2)ou inclusif "|"
// 3)ou exclusif "^"
// 4)operateur de negation ou de complement "~"
// 5)operateur de decalage a droite ">>"
// 6)operateur de decalage a gauche "<<"

unsigned char   swap_bits(unsigned char octet)
{
    return ((octet >> 4) | (octet << 4));
}