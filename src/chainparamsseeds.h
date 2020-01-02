#ifndef PIGEON_CHAINPARAMSSEEDS_H
#define PIGEON_CHAINPARAMSSEEDS_H
/**
 * Each line contains a 16-byte IPv6 address and a port.
 * IPv4 as well as onion addresses are wrapped inside a IPv6 address accordingly.
 */
static SeedSpec6 pnSeed6_main[] = {
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x03,0x88,0xf4,0xd8}, 11555}
};

static SeedSpec6 pnSeed6_test[] = {

};
#endif // PIGEON_CHAINPARAMSSEEDS_H
