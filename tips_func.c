
/* Reverse 8 bits */
uint8_t ReverseBits(uint8_t num) 
{
    num = ((num & 0x55) << 1) | ((num & 0xAA) >> 1);
    num = ((num & 0x33) << 2) | ((num & 0xCC) >> 2);
    num = ((num & 0x0F) << 4) | ((num & 0xF0) >> 4);
    return num;
}

