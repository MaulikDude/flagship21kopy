/* Copyright 2021 Dr. Maulik Arvind Maradia ie Dr. Mo, Mo-e-lectronics>
 
 */

#include "flagship21kopy.h"

#ifdef RGB_MATRIX_ENABLE


led_config_t g_led_config = { {
  // Key Matrix to LED Index
  { 3, 2, 1, 0 },
  { 113, 4, 5, 6, 7,  8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 },
  { 112, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21 },
  { 111, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 114, 121 },
  { 110, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 115, 120 },
  { 109, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 116, 119 },
  { 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 117, 118 },
        
  
}, {
  // LED Index to Physical Position
 
           	  { 11.2, 0 },   { 22.4, 0 },   { 33.6, 0 },   { 44.8, 0 },
	{ 0, 10.66 }, { 11.2, 10.66 }, { 22.4, 10.66 }, { 33.6, 10.66 }, { 44.8, 10.66 }, { 56, 10.66 }, { 67.2, 10.66 }, {  78.4, 10.66 }, { 89.6, 10.66 }, { 100.8, 10.66 }, { 112, 10.66 }, { 123.2, 10.66 }, { 134.4, 10.66 }, { 145.6, 10.66 }, { 156.7, 10.66 }, { 179, 10.66 }, { 190.2, 10.66 }, { 201.4, 10.66 },
  	{ 0, 21.33 }, { 11.2, 21.33 }, { 22.4, 21.33 }, { 33.6, 21.33 }, { 44.8, 21.33 }, { 56, 21.33 }, { 67.2, 21.33 }, {  78.4, 21.33 }, { 89.6, 21.33 }, { 100.8, 21.33 }, { 112, 21.33 }, { 123.2, 21.33 }, { 134.4, 21.33 }, { 145.6, 21.33 }, { 156.7, 21.33 }, { 179, 21.33 }, { 190.2, 21.33 }, { 201.4, 21.33 },
  	{ 0, 31.98 }, { 11.2, 31.98 }, { 22.4, 31.98 }, { 33.6, 31.98 }, { 44.8, 31.98 }, { 56, 31.98 }, { 67.2, 31.98 }, {  78.4, 31.98 }, { 89.6, 31.98 }, { 100.8, 31.98 }, { 112, 31.98 }, { 123.2, 31.98 }, { 134.4, 31.98 }, { 145.6, 31.98 }, { 156.7, 31.98 }, { 179, 31.98 }, { 190.2, 31.98 }, { 201.4, 31.98 }, { 212.6, 31.98 }, { 223.8, 31.98 }, { 234.9, 31.98 },
  	{ 0, 42.64 }, { 11.2, 42.64 }, { 22.4, 42.64 }, { 33.6, 42.64 }, { 44.8, 42.64 }, { 56, 42.64 }, { 67.2, 42.64 }, {  78.4, 42.64 }, { 89.6, 42.64 }, { 100.8, 42.64 }, { 112, 42.64 }, { 123.2, 42.64 }, { 134.4, 42.64 }, { 145.6, 42.64 }, { 156.7, 42.64 }, { 179, 42.64 }, { 190.2, 42.64 }, { 201.4, 42.64 }, { 212.6, 42.64 }, { 223.8, 42.64 }, { 234.9, 42.64 },
  	{ 0, 53.3 }, { 11.2, 53.3 }, { 22.4, 53.3 }, { 33.6, 53.3 }, { 44.8, 53.3 }, { 56, 53.3}, { 67.2, 53.3 }, {  78.4, 53.3 }, { 89.6, 53.3 }, { 100.8, 53.3 }, { 112, 53.3 }, { 123.2, 53.3 }, { 134.4, 53.3 }, { 145.6, 53.3 }, { 156.7, 53.3 }, { 179, 53.3 }, { 190.2, 53.3 }, { 201.4, 53.3 }, { 212.6, 53.3 }, { 223.8, 53.3 }, { 234.9, 53.3 },
  	{ 0, 63.96 }, { 11.2, 63.96 }, { 22.4, 63.96 }, { 33.6, 63.96 }, { 44.8, 63.96 }, { 56, 63.96 }, { 67.2, 63.96 }, {  78.4, 63.96 }, { 89.6, 63.96 }, { 100.8, 63.96 }, { 112, 63.96 }, { 123.2, 63.96 }, { 134.4, 63.96 }, { 145.6, 63.96 }, { 156.7, 63.96 }, { 179, 63.96 }, { 190.2, 63.96 }, { 201.4, 63.96 }, { 212.6, 63.96 }, { 223.8, 63.96 }, { 234.9, 63.96 }
}, {
  // LED Index to Flag
     4, 4, 4, 4,
  2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 2,
  2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 2,
  2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 2,
  2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 2, 2  
} };

#endif





