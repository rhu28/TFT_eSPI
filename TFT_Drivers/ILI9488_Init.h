
// This is the command sequence that initialises the ILI9488 driver
//
// This setup information uses simple 8 bit SPI writecommand() and writedata() functions
//
// See ST7735_Setup.h file for an alternative format

{
  writecommand(0xE0);
  writedata(0x00);
  writedata(0x03);
  writedata(0x09);
  writedata(0x08);
  writedata(0x16);
  writedata(0x0A);
  writedata(0x3F);
  writedata(0x78);
  writedata(0x4C);
  writedata(0x09);
  writedata(0x0A);
  writedata(0x08);
  writedata(0x16);
  writedata(0x1A);
  writedata(0x0F);


  writecommand(0XE1);
  writedata(0x00);
  writedata(0x16);
  writedata(0x19);
  writedata(0x03);
  writedata(0x0F);
  writedata(0x05);
  writedata(0x32);
  writedata(0x45);
  writedata(0x46);
  writedata(0x04);
  writedata(0x0E);
  writedata(0x0D);
  writedata(0x35);
  writedata(0x37);
  writedata(0x0F);



  writecommand(0XC0);      //Power Control 1
  writedata(0x17);    //Vreg1out
  writedata(0x15);    //Verg2out

  writecommand(0xC1);      //Power Control 2
  writedata(0x41);    //VGH,VGL

  writecommand(0xC5);      //Power Control 3
  writedata(0x00);
  writedata(0x12);    //Vcom
  writedata(0x80);

  writecommand(0x36);      //Memory Access
  writedata(0x48);

  writecommand(0x3A);      // Interface Pixel Format
  writedata(0x66);    //18 bit

  writecommand(0XB0);      // Interface Mode Control
  writedata(0x80);           //SDO NOT USE

  writecommand(0xB1);      //Frame rate
  writedata(0xA0);    //60Hz

  writecommand(0xB4);      //Display Inversion Control
  writedata(0x02);    //2-dot

  writecommand(0XB6);      //Display Function Control  RGB/MCU Interface Control

  writedata(0x02);    //MCU
  writedata(0x02);    //Source,Gate scan dieection

  writecommand(0XE9);      // Set Image Functio
  writedata(0x00);    // Disable 24 bit data

  writecommand(0xF7);      // Adjust Control
  writedata(0xA9);
  writedata(0x51);
  writedata(0x2C);
  writedata(0x82);    // D7 stream, loose


  writecommand(ILI9488_SLPOUT);    //Exit Sleep
  spi_end();
  delay(120);
  spi_begin();
  writecommand(ILI9488_DISPON);    //Display on
}