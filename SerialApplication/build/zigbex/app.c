#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 65 "/usr/lib/gcc/avr/3.4.3/../../../../avr/include/stdint.h"
typedef signed char int8_t;




typedef unsigned char uint8_t;
# 104 "/usr/lib/gcc/avr/3.4.3/../../../../avr/include/stdint.h" 3
typedef int int16_t;




typedef unsigned int uint16_t;










typedef long int32_t;




typedef unsigned long uint32_t;










typedef long long int64_t;




typedef unsigned long long uint64_t;
#line 155
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
# 385 "/usr/lib/ncc/nesc_nx.h"
typedef struct { char data[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { char data[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { char data[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { char data[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 213 "/usr/lib/gcc/avr/3.4.3/include/stddef.h" 3
typedef unsigned int size_t;
# 67 "/usr/lib/gcc/avr/3.4.3/../../../../avr/include/string.h"
extern void *memcpy(void *, const void *, size_t );

extern void *memset(void *, int , size_t );







extern size_t strlen(const char *) __attribute((__pure__)) ;
# 325 "/usr/lib/gcc/avr/3.4.3/include/stddef.h" 3
typedef int wchar_t;
# 69 "/usr/lib/gcc/avr/3.4.3/../../../../avr/include/stdlib.h"
#line 66
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 72
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *, const void *);
# 145 "/usr/lib/gcc/avr/3.4.3/../../../../avr/include/math.h" 3
extern double sqrt(double __x) __attribute((const)) ;
# 151 "/usr/lib/gcc/avr/3.4.3/include/stddef.h" 3
typedef int ptrdiff_t;
# 19 "/opt/tinyos-2.x/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 20
  FALSE = 0, TRUE = 1
};
typedef struct { char data[1]; } __attribute__((packed)) nx_bool;typedef int8_t __nesc_nxbase_nx_bool  ;
uint16_t TOS_NODE_ID = 1;





struct __nesc_attr_atmostonce {
};
#line 30
struct __nesc_attr_atleastonce {
};
#line 31
struct __nesc_attr_exactlyonce {
};
# 34 "/opt/tinyos-2.x/tos/types/TinyError.h"
enum __nesc_unnamed4245 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2);
# 90 "/usr/lib/gcc/avr/3.4.3/../../../../avr/include/avr/pgmspace.h"
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;

typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;


typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/opt/tinyos-2.x/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 78 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt(void);



static __inline void __nesc_disable_interrupt(void);




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 98
__inline __nesc_atomic_t 
__nesc_atomic_start(void )  ;








#line 107
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)  ;






typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4246 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2);
# 34 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4247 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4248 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4249 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 85
typedef struct __nesc_unnamed4250 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4251 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4252 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4253 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4254 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 141
typedef struct __nesc_unnamed4257 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 29 "/opt/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4258 {
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4259 {
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4260 {
} 
#line 31
TMicro;
# 43 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4261 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4262 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4263 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4264 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4265 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 99
#line 89
typedef union __nesc_unnamed4266 {

  uint8_t flat;
  struct __nesc_unnamed4267 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 121
#line 111
typedef union __nesc_unnamed4268 {

  uint8_t flat;
  struct __nesc_unnamed4269 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128_ASSR_t;
#line 137
#line 124
typedef union __nesc_unnamed4270 {

  uint8_t flat;
  struct __nesc_unnamed4271 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 154
#line 141
typedef union __nesc_unnamed4272 {

  uint8_t flat;
  struct __nesc_unnamed4273 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 169
#line 158
typedef union __nesc_unnamed4274 {

  uint8_t flat;
  struct __nesc_unnamed4275 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4276 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 193
#line 184
typedef union __nesc_unnamed4277 {

  uint8_t flat;
  struct __nesc_unnamed4278 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4279 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 232
#line 222
typedef union __nesc_unnamed4280 {

  uint8_t flat;
  struct __nesc_unnamed4281 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 250
#line 241
typedef union __nesc_unnamed4282 {

  uint8_t flat;
  struct __nesc_unnamed4283 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 300
#line 288
typedef union __nesc_unnamed4284 {

  uint8_t flat;
  struct __nesc_unnamed4285 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 315
#line 303
typedef union __nesc_unnamed4286 {

  uint8_t flat;
  struct __nesc_unnamed4287 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/opt/tinyos-2.x/tos/platforms/mica/MicaTimer.h"
typedef struct __nesc_unnamed4288 {
} 
#line 51
T64khz;
typedef struct __nesc_unnamed4289 {
} 
#line 52
T128khz;
typedef struct __nesc_unnamed4290 {
} 
#line 53
T2mhz;
typedef struct __nesc_unnamed4291 {
} 
#line 54
T4mhz;
#line 107
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4292 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4293 {
  PLATFORM_MHZ = 8
};
# 56 "/opt/tinyos-2.x/tos/platforms/zigbex/hardware.h"
enum __nesc_unnamed4294 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7
};

enum __nesc_unnamed4295 {
  PLATFORM_BAUDRATE = 57600L
};
# 30 "/opt/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4296 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 43 "/usr/lib/gcc/avr/3.4.3/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
# 105 "/usr/lib/gcc/avr/3.4.3/include/stdarg.h" 3
typedef __gnuc_va_list va_list;
# 166 "/usr/lib/gcc/avr/3.4.3/../../../../avr/include/stdio.h"
struct __file;
#line 218
struct __file;

struct __file;
#line 429
extern int sprintf(char *__s, const char *__fmt, ...);
# 16 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/Oscilloscope.h"
enum __nesc_unnamed4297 {


  NREADINGS = 10, 


  DEFAULT_INTERVAL = 512, 

  AM_OSCILLOSCOPE = 0x93
};







#line 27
typedef nx_struct oscilloscope {
  nx_uint16_t version;
  nx_uint16_t interval;
  nx_uint16_t id;
  nx_uint16_t count;
  nx_uint16_t readings[NREADINGS];
} __attribute__((packed)) oscilloscope_t;
# 38 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/Opt_App.h"
#line 32
typedef struct _sensor_data {
  uint16_t SamplingInfo;
  union __nesc_unnamed4298 {
    uint16_t ADC_data[6];
    uint8_t CHA_data[12];
  } Sdata;
} __attribute((packed))  Sensor_data_t;




#line 40
typedef struct _stream_data {
  uint16_t channel;
  uint16_t stream[30];
} __attribute((packed))  Stream_data_t;




#line 45
typedef struct _long_message_data {
  uint8_t dataLength;
  uint8_t Msg_Data[64];
} __attribute((packed))  Long_Message_data_t;





#line 50
typedef union _app_data {
  Sensor_data_t sensor;
  Stream_data_t stream;
  Long_Message_data_t message;
} __attribute((packed))  App_data_t;







#line 58
typedef struct _app_struct {
  uint8_t AppType;
  uint8_t OptType;
  App_data_t AppData;
} __attribute((packed))  App_struct_t;










#line 68
typedef struct _setConfig_struct {
  uint8_t NwkProtocolType;
  uint8_t Gossiping_PercentageInfo;
  uint16_t SetSampleTime;
  uint8_t ConfigData[8];
} __attribute((packed))  SetConfig_struct_t;










#line 75
typedef struct _optConfig_struct {
  uint16_t packetType;
  uint16_t optType;
  uint8_t subCmd1;
  uint8_t subCmd2;
  union __nesc_unnamed4299 {
    uint16_t SensorData[8];
    uint8_t GeneralData[16];
  } ConfigData;
} __attribute((packed))  OptConfig_struct_t;







#line 86
typedef struct _cmd_struct {
  uint8_t CMDType;
  union __nesc_unnamed4300 {
    SetConfig_struct_t SetConfig;
    OptConfig_struct_t OptConfig;
  } CMD_Data;
} __attribute((packed))  Cmd_struct_t;
#line 112
#line 101
typedef struct _configuration_sampling_struct {
  uint8_t stxm;
  uint16_t packetType;
  uint16_t optType;
  uint8_t subCmd1;
  uint8_t subCmd2;
  union __nesc_unnamed4301 {
    uint16_t SensorData[8];
    uint8_t GeneralData[16];
  } ConfigData;
  uint8_t etxm;
} __attribute((packed))  configuration_sampling_struct_t;
#line 125
#line 117
typedef struct _longData_struct {
  uint8_t stxm;
  uint16_t packetType;
  uint16_t optType;
  uint8_t subCmd1;
  uint8_t dataLength;
  uint8_t data[64];
  uint8_t etxm;
} __attribute((packed))  longData_struct_t;









enum __nesc_unnamed4302 {
#line 135
  OPT_TEST_RF = 0x17
};
# 56 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/H_NWK_Routing.h"
#line 44
typedef struct __nesc_unnamed4303 {
  uint16_t FrameControl;
  uint16_t DstAddr;
  uint16_t SrcAddr;
  uint8_t Radius;
  uint8_t SeqNum;
  uint16_t Dst2_for_multihop;
  uint16_t Dst3_for_multihop;
  uint16_t Dst4_for_multihop;
  uint16_t Dst5_for_multihop;
  uint8_t Protocol_Info;
  uint8_t UpperDataLen;
} __attribute((packed))  NWKFrame_Header;




#line 58
typedef struct __nesc_unnamed4304 {
  NWKFrame_Header NwkHeader;
  App_struct_t UpperData;
} __attribute((packed))  NWKDATA_Frame;




#line 63
typedef struct __nesc_unnamed4305 {
  NWKFrame_Header NwkHeader;
  Cmd_struct_t UpperData;
} __attribute((packed))  NWKCMD_Frame;








#line 69
typedef struct __nesc_unnamed4306 {
  uint16_t FrameControl;
  uint16_t SrcAddr;
  uint8_t HopNum_from_Sink;
  uint8_t isEndNode;
  uint16_t MyParentAddr;
} __attribute((packed))  BeaconFrame;









#line 78
typedef struct __nesc_unnamed4307 {
  uint16_t Naddr;
  uint8_t HopNum_from_Sink;
  uint8_t isEndNode;
  char RSSI;
  uint8_t LQI;
} 
__attribute((packed))  NeighborTable;
#line 113
#line 104
typedef struct __nesc_unnamed4308 {
  uint8_t Alive;
  uint8_t ExpiredTime;
  uint8_t SeqNum;
  uint8_t NumTry;
  uint16_t SrcAddr;
  uint8_t Msg_Len;
  uint8_t Nodata;
  NWKDATA_Frame Frame;
} __attribute((packed))  DATA_Queue;
#line 125
#line 115
typedef struct __nesc_unnamed4309 {
  uint8_t Alive;
  uint8_t ExpiredTime;
  uint8_t SeqNum;
  uint8_t NumTry;
  uint16_t SrcAddr;
  uint16_t Next_CMD_Address;
  uint8_t Msg_Len;
  uint8_t Nodata;
  NWKCMD_Frame Frame;
} __attribute((packed))  CMD_Queue;






#line 127
typedef struct __nesc_unnamed4310 {
  uint16_t DstAddr;
  uint16_t SrcAddr;
  uint8_t SeqNum;
  uint8_t ExpiredTime;
} __attribute((packed))  Sent_Table;
# 39 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/Interaction.h"
#line 34
typedef struct __nesc_unnamed4311 {
  uint16_t Temp;
  uint16_t Humi;
  uint16_t Photo;
  uint16_t Ultrared;
} __attribute((packed))  BasicSensor_Data;
# 37 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.h"
enum __nesc_unnamed4312 {
  SHT11_STATUS_LOW_RES_BIT = 1 << 0, 
  SHT11_STATUS_NO_RELOAD_BIT = 1 << 1, 
  SHT11_STATUS_HEATER_ON_BIT = 1 << 2, 
  SHT11_STATUS_LOW_BATTERY_BIT = 1 << 6
};
# 33 "/opt/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 32 "/opt/tinyos-2.x/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 48
#line 36
typedef union __nesc_unnamed4313 {
  struct Atm128_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm128UartStatus_t;

typedef Atm128UartStatus_t Atm128_UCSR0A_t;
typedef Atm128UartStatus_t Atm128_UCSR1A_t;
#line 66
#line 54
typedef union __nesc_unnamed4314 {
  struct Atm128_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm128UartControl_t;

typedef Atm128UartControl_t Atm128_UCSR0B_t;
typedef Atm128UartControl_t Atm128_UCSR1B_t;

enum __nesc_unnamed4315 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 89
#line 79
typedef union __nesc_unnamed4316 {
  uint8_t flat;
  struct Atm128_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} Atm128UartMode_t;

typedef Atm128UartMode_t Atm128_UCSR0C_t;
typedef Atm128UartMode_t Atm128_UCSR1C_t;





enum __nesc_unnamed4317 {
  ATM128_19200_BAUD_4MHZ = 12, 
  ATM128_38400_BAUD_4MHZ = 6, 
  ATM128_57600_BAUD_4MHZ = 3, 

  ATM128_19200_BAUD_4MHZ_2X = 25, 
  ATM128_38400_BAUD_4MHZ_2X = 12, 
  ATM128_57600_BAUD_4MHZ_2X = 8, 

  ATM128_19200_BAUD_7MHZ = 23, 
  ATM128_38400_BAUD_7MHZ = 11, 
  ATM128_57600_BAUD_7MHZ = 7, 

  ATM128_19200_BAUD_7MHZ_2X = 47, 
  ATM128_38400_BAUD_7MHZ_2X = 23, 
  ATM128_57600_BAUD_7MHZ_2X = 15, 

  ATM128_19200_BAUD_8MHZ = 25, 
  ATM128_38400_BAUD_8MHZ = 12, 
  ATM128_57600_BAUD_8MHZ = 8, 

  ATM128_19200_BAUD_8MHZ_2X = 51, 
  ATM128_38400_BAUD_8MHZ_2X = 34, 
  ATM128_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t Atm128_UBRR0L_t;
typedef uint8_t Atm128_UBRR0H_t;

typedef uint8_t Atm128_UBRR1L_t;
typedef uint8_t Atm128_UBRR1H_t;
typedef TMilli SerialAppM$Timer$precision_tag;
enum HilTimerMilliC$__nesc_unnamed4318 {
  HilTimerMilliC$TIMER_COUNT = 13U
};
typedef uint8_t HplAtm128Timer0AsyncC$Compare$size_type;
typedef uint8_t HplAtm128Timer0AsyncC$Timer$timer_size;
typedef uint8_t /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$timer_size;
typedef /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$timer_size /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$timer_size;
typedef TMilli /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$frequency_tag;
typedef uint8_t /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size;
typedef /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$frequency_tag /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$precision_tag;
typedef /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type;
typedef /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size;
typedef TMilli /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$frequency_tag;
typedef uint8_t /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$timer_size;
typedef /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$frequency_tag /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$precision_tag;
typedef /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$timer_size /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$size_type;
typedef /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$timer_size /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$timer_size;
typedef TMilli /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type;
typedef TMilli /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_precision_tag;
typedef uint8_t /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_size_type;
typedef uint32_t /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$upper_count_type;
typedef /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_precision_tag /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$precision_tag;
typedef /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_precision_tag /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$precision_tag;
typedef /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$size_type;
typedef /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_precision_tag /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$precision_tag;
typedef /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$size_type;
typedef /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_precision_tag /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$precision_tag;
typedef /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type;
typedef TMilli LedControllerM$LedTimer1$precision_tag;
typedef TMilli LedControllerM$MorseTimer$precision_tag;
typedef TMilli LedControllerM$CompleteTimer$precision_tag;
typedef TMilli LedControllerM$LedTimer2$precision_tag;
typedef TMilli LedControllerM$LedTimer0$precision_tag;
typedef TMilli LCDSetterM$Timer$precision_tag;
typedef TMilli InteractionM$SensorCheckTimer$precision_tag;
typedef TMilli InteractionM$C328_Reset_Timer$precision_tag;
typedef uint16_t InteractionM$Read_Humi$val_t;
typedef uint16_t InteractionM$Read_Ultrared$val_t;
typedef uint16_t InteractionM$Read_Photo$val_t;
typedef TMilli InteractionM$ConfigTimeout$precision_tag;
typedef uint16_t InteractionM$Read_Temp$val_t;
typedef uint16_t /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$val_t;
typedef uint16_t /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$val_t;
typedef TMilli /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$precision_tag;
typedef TMilli HplSensirionSht11P$Timer$precision_tag;
enum /*InteractionC.SensirionSht11C*/SensirionSht11C$0$__nesc_unnamed4319 {
  SensirionSht11C$0$TEMP_KEY = 0U
};
enum /*InteractionC.SensirionSht11C*/SensirionSht11C$0$__nesc_unnamed4320 {
  SensirionSht11C$0$HUM_KEY = 1U
};
typedef uint16_t /*InteractionC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$val_t;
typedef uint16_t /*InteractionC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$val_t;
typedef uint16_t AdcP$Read$val_t;
typedef uint16_t AdcP$ReadNow$val_t;
typedef uint16_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$val_t;
enum /*InteractionC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$__nesc_unnamed4321 {
  AdcReadClientC$0$ID = 0U, AdcReadClientC$0$HAL_ID = 0U
};
typedef uint16_t /*InteractionC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$Read$val_t;
typedef uint16_t /*InteractionC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$subRead$val_t;
enum /*InteractionC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$__nesc_unnamed4322 {
  AdcReadClientC$1$ID = 1U, AdcReadClientC$1$HAL_ID = 1U
};
typedef uint16_t TempSensorM$Read_Humidity$val_t;
typedef uint16_t TempSensorM$Read_Temp$val_t;
typedef uint16_t /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Humidity$val_t;
typedef uint16_t /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Temperature$val_t;
enum /*TempSensorC.Sensor*/SensirionSht11C$1$__nesc_unnamed4323 {
  SensirionSht11C$1$TEMP_KEY = 2U
};
enum /*TempSensorC.Sensor*/SensirionSht11C$1$__nesc_unnamed4324 {
  SensirionSht11C$1$HUM_KEY = 3U
};
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void SerialAppM$Boot$booted(void);
# 3 "TempSensor.nc"
static  void SerialAppM$TempSensor$done(uint16_t arg_0x7ef41a88, uint16_t arg_0x7ef41c18);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void SerialAppM$Timer$fired(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP$Init$init(void);
#line 51
static  error_t MotePlatformP$PlatformInit$init(void);
# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   bool /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$get(void);


static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr(void);

static   bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$get(void);


static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void);

static   bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$get(void);


static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void);


static   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void);
#line 30
static   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP$14$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP$14$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP$14$IO$clr(void);


static   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$makeInput(void);

static   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$clr(void);


static   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeInput(void);
#line 32
static   bool /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$get(void);


static   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$clr(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t MeasureClockC$Init$init(void);
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static   uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t arg_0x7eed2520);
#line 53
static   uint8_t MeasureClockC$Atm128Calibrate$adcPrescaler(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t SchedulerBasicP$TaskBasic$postTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7f062030);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$default$runTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7f062030);
# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static  void SchedulerBasicP$Scheduler$init(void);
#line 61
static  void SchedulerBasicP$Scheduler$taskLoop(void);
#line 54
static  bool SchedulerBasicP$Scheduler$runNextTask(void);
# 54 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static   mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void);
# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void McuSleepC$McuSleep$sleep(void);
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void McuSleepC$McuPowerState$update(void);
# 36 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static   Atm128TimerControl_t HplAtm128Timer0AsyncC$TimerCtrl$getControl(void);







static   Atm128_TIFR_t HplAtm128Timer0AsyncC$TimerCtrl$getInterruptFlag(void);
#line 37
static   void HplAtm128Timer0AsyncC$TimerCtrl$setControl(Atm128TimerControl_t arg_0x7eb04030);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t HplAtm128Timer0AsyncC$Init$init(void);
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer0AsyncC$Compare$reset(void);
#line 45
static   void HplAtm128Timer0AsyncC$Compare$set(HplAtm128Timer0AsyncC$Compare$size_type arg_0x7eaf5010);










static   void HplAtm128Timer0AsyncC$Compare$start(void);


static   void HplAtm128Timer0AsyncC$Compare$stop(void);
# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   bool HplAtm128Timer0AsyncC$Timer$test(void);
#line 52
static   HplAtm128Timer0AsyncC$Timer$timer_size HplAtm128Timer0AsyncC$Timer$get(void);
#line 95
static   void HplAtm128Timer0AsyncC$Timer$setScale(uint8_t arg_0x7eb14428);
#line 58
static   void HplAtm128Timer0AsyncC$Timer$set(HplAtm128Timer0AsyncC$Timer$timer_size arg_0x7eb217b0);










static   void HplAtm128Timer0AsyncC$Timer$start(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Init$init(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$overflow(void);
# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$size_type arg_0x7eb449e0, /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$size_type arg_0x7eb44b70);
#line 62
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$stop(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$size_type /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$get(void);






static   bool /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$isOverflowPending(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$overflow(void);
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$getNow(void);
#line 92
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$startAt(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$size_type arg_0x7eb449e0, /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$size_type arg_0x7eb44b70);
#line 105
static   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$getAlarm(void);
#line 62
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$stop(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$overflow(void);
#line 53
static   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$get(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$fired(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void);
# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void);
#line 118
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t arg_0x7ef72cd0, uint32_t arg_0x7ef72e60);
#line 67
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void);
#line 72
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e976cd8);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e976cd8, 
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x7ef81a70);








static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e976cd8, 
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x7ef80068);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e976cd8);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void LedControllerM$LedTimer1$fired(void);
#line 72
static  void LedControllerM$MorseTimer$fired(void);
#line 72
static  void LedControllerM$CompleteTimer$fired(void);
#line 72
static  void LedControllerM$LedTimer2$fired(void);
#line 72
static  void LedControllerM$LedTimer0$fired(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t LedsP$Init$init(void);
# 50 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static   void LedsP$Leds$led0Off(void);










static   void LedsP$Leds$led1On(void);
#line 106
static   uint8_t LedsP$Leds$get(void);
#line 66
static   void LedsP$Leds$led1Off(void);
#line 83
static   void LedsP$Leds$led2Off(void);
#line 45
static   void LedsP$Leds$led0On(void);
#line 78
static   void LedsP$Leds$led2On(void);
# 2 "LCDSetter.nc"
static  void LCDSetterM$LCDSetter$init(void);
static  void LCDSetterM$LCDSetter$setLCD(uint8_t arg_0x7ef43030, float arg_0x7ef431b0, float arg_0x7ef43330, float arg_0x7ef434b0);
# 22 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/Interaction.nc"
static  void LCDSetterM$Interaction$StartDoneConfiguration(uint8_t arg_0x7e7b0648, uint8_t arg_0x7e7b07d0);



static  void LCDSetterM$Interaction$getSensorDataDone(App_struct_t *arg_0x7e7a8448, uint8_t arg_0x7e7a85d8);


static  void LCDSetterM$Interaction$Urgency_Data(uint8_t *arg_0x7e7a70d8, uint8_t arg_0x7e7a7260);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void LCDSetterM$TryToSetTimer$runTask(void);
#line 64
static  void LCDSetterM$TryToConfigure$runTask(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void LCDSetterM$Timer$fired(void);
#line 72
static  void InteractionM$SensorCheckTimer$fired(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void InteractionM$SendBasicSensor$runTask(void);
#line 64
static  void InteractionM$Event_Urgency_Data$runTask(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void InteractionM$C328_Reset_Timer$fired(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void InteractionM$Read_Humi$readDone(error_t arg_0x7e753480, InteractionM$Read_Humi$val_t arg_0x7e753608);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void InteractionM$ProcessCMD$runTask(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void InteractionM$Read_Ultrared$readDone(error_t arg_0x7e753480, InteractionM$Read_Ultrared$val_t arg_0x7e753608);
# 28 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/Interaction.nc"
static  void InteractionM$Interaction$Process_CMD(void *arg_0x7e7a8a80, uint8_t arg_0x7e7a8c08);
#line 24
static  void InteractionM$Interaction$SetSamplingTime(uint16_t arg_0x7e7b0c70);
#line 21
static  void InteractionM$Interaction$StartConfiguration(App_struct_t *arg_0x7e7b01b8);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void InteractionM$Read_Photo$readDone(error_t arg_0x7e753480, InteractionM$Read_Photo$val_t arg_0x7e753608);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void InteractionM$Set_C328_Restart_Timer_START$runTask(void);
# 29 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/CommunicationWithOPT.nc"
static   void InteractionM$CommunicationWithOPT$parsing_config(uint8_t *arg_0x7e743840);

static   void InteractionM$CommunicationWithOPT$parsing_control(uint8_t *arg_0x7e7421f0);
static   void InteractionM$CommunicationWithOPT$parsing_longDT(uint8_t *arg_0x7e7426b8);
#line 30
static   void InteractionM$CommunicationWithOPT$parsing_sensor(uint8_t *arg_0x7e743d08);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void InteractionM$TaskStartDoneConfiguration$runTask(void);
#line 64
static  void InteractionM$TryToGetSensorData$runTask(void);
#line 64
static  void InteractionM$TaskGetSensorDataDone$runTask(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void InteractionM$ConfigTimeout$fired(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void InteractionM$Read_Temp$readDone(error_t arg_0x7e753480, InteractionM$Read_Temp$val_t arg_0x7e753608);
# 84 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
static  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureHumidityDone(error_t arg_0x7e689b70, uint16_t arg_0x7e689d00);
#line 116
static  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$writeStatusRegDone(error_t arg_0x7e6873a0);
#line 100
static  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$readStatusRegDone(error_t arg_0x7e688730, uint8_t arg_0x7e6888b8);
#line 54
static  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$resetDone(error_t arg_0x7e690820);
#line 69
static  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureTemperatureDone(error_t arg_0x7e6890f8, uint16_t arg_0x7e689288);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$read(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$granted(void);
# 84 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
static  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureHumidityDone(error_t arg_0x7e689b70, uint16_t arg_0x7e689d00);
#line 116
static  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$writeStatusRegDone(error_t arg_0x7e6873a0);
#line 100
static  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$readStatusRegDone(error_t arg_0x7e688730, uint8_t arg_0x7e6888b8);
#line 54
static  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$resetDone(error_t arg_0x7e690820);
#line 69
static  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureTemperatureDone(error_t arg_0x7e6890f8, uint16_t arg_0x7e689288);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$granted(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$read(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$fired(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readSensor$runTask(void);
#line 64
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone$runTask(void);
# 84 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$measureHumidityDone(
# 54 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e657200, 
# 84 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
error_t arg_0x7e689b70, uint16_t arg_0x7e689d00);
#line 76
static  error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureHumidity(
# 54 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e657200);
# 61 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
static  error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureTemperature(
# 54 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e657200);
# 116 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$writeStatusRegDone(
# 54 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e657200, 
# 116 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
error_t arg_0x7e6873a0);
#line 100
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$readStatusRegDone(
# 54 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e657200, 
# 100 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
error_t arg_0x7e688730, uint8_t arg_0x7e6888b8);
#line 54
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$resetDone(
# 54 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e657200, 
# 54 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
error_t arg_0x7e690820);
#line 69
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$measureTemperatureDone(
# 54 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e657200, 
# 69 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
error_t arg_0x7e6890f8, uint16_t arg_0x7e689288);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$fired(void);
# 79 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t HplSensirionSht11P$SplitControl$start(void);
#line 102
static  error_t HplSensirionSht11P$SplitControl$stop(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void HplSensirionSht11P$stopTask$runTask(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void HplSensirionSht11P$Timer$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void);
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$clear(void);
#line 40
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$disable(void);
#line 59
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$edge(bool arg_0x7e5c8088);
#line 35
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$enable(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$disable(void);
#line 43
static   error_t /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t arg_0x7e552010);
#line 43
static   bool /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void);








static   bool /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t arg_0x7e5535e0);







static   resource_client_id_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e5436c8);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(
# 59 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e542910);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(
# 59 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e542910);
# 56 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceController$release(void);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$release(
# 53 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e544d40);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$request(
# 53 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e544d40);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(
# 53 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e544d40);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void);
# 88 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$startDone(error_t arg_0x7e5e4330);
#line 110
static  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$stopDone(error_t arg_0x7e5e4e68);
# 52 "/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
static   void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$PowerDownCleanup$default$cleanup(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopTask$runTask(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
static   void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$requested(void);
#line 46
static   void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$granted(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$startTask$runTask(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$default$start(void);








static  error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$default$stop(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t /*InteractionC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$read(void);







static  void /*InteractionC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$readDone(error_t arg_0x7e753480, /*InteractionC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$val_t arg_0x7e753608);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t Atm128AdcP$Init$init(void);
# 110 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static   bool Atm128AdcP$Atm128AdcMultiple$default$dataReady(uint16_t arg_0x7e4a1a68, bool arg_0x7e4a1bf0, uint8_t arg_0x7e4a1d78, 
uint8_t *arg_0x7e4a0010, uint8_t *arg_0x7e4a01c0);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static   bool Atm128AdcP$Atm128AdcSingle$getData(uint8_t arg_0x7e4a8868, uint8_t arg_0x7e4a89f8, 
bool arg_0x7e4a8b98, uint8_t arg_0x7e4a8d28);
# 147 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
static   void Atm128AdcP$HplAtm128Adc$dataReady(uint16_t arg_0x7e48a120);
# 73 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static   error_t Atm128AdcP$AsyncStdControl$start(void);








static   error_t Atm128AdcP$AsyncStdControl$stop(void);
# 44 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
static   Atm128Admux_t HplAtm128AdcP$HplAtm128Adc$getAdmux(void);
#line 73
static   void HplAtm128AdcP$HplAtm128Adc$enableAdc(void);
#line 49
static   void HplAtm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t arg_0x7e493da8);
#line 141
static   bool HplAtm128AdcP$HplAtm128Adc$cancel(void);
#line 77
static   void HplAtm128AdcP$HplAtm128Adc$disableAdc(void);








static   void HplAtm128AdcP$HplAtm128Adc$disableInterruption(void);
#line 60
static   void HplAtm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t arg_0x7e4916f8);
#line 55
static   Atm128Adcsra_t HplAtm128AdcP$HplAtm128Adc$getAdcsra(void);










static   uint16_t HplAtm128AdcP$HplAtm128Adc$getValue(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(resource_client_id_t arg_0x7e552010);
#line 43
static   bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty(void);








static   bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(resource_client_id_t arg_0x7e5535e0);







static   resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue(void);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceRequested$default$requested(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e5436c8);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$default$unconfigure(
# 59 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e542910);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$default$configure(
# 59 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e542910);
# 56 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceController$release(void);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$release(
# 53 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e544d40);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$request(
# 53 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e544d40);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$default$granted(
# 53 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e544d40);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask$runTask(void);
# 52 "/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
static   void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
static   void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$requested(void);
#line 46
static   void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$granted(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t AdcP$Read$read(
# 48 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7e412610);
# 65 "/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
static   void AdcP$ReadNow$default$readDone(
# 49 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7e411440, 
# 65 "/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
error_t arg_0x7e4b5b10, AdcP$ReadNow$val_t arg_0x7e4b5c98);
# 32 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t AdcP$Atm128AdcConfig$default$getRefVoltage(
# 53 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7e40e748);
# 25 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t AdcP$Atm128AdcConfig$default$getChannel(
# 53 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7e40e748);
# 39 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t AdcP$Atm128AdcConfig$default$getPrescaler(
# 53 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7e40e748);
# 72 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static   void AdcP$Atm128AdcSingle$dataReady(uint16_t arg_0x7e4a78b8, bool arg_0x7e4a7a40);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void AdcP$acquiredData$runTask(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$read(
# 24 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7e3f83a8);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(
# 24 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7e3f83a8, 
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
error_t arg_0x7e753480, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t arg_0x7e753608);
#line 63
static  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(
# 26 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7e3f6250, 
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
error_t arg_0x7e753480, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$val_t arg_0x7e753608);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(
# 27 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7e3f5010);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$request(
# 27 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7e3f5010);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(
# 27 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7e3f5010);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void PhotoP$ResourceConfigure$unconfigure(void);
#line 49
static   void PhotoP$ResourceConfigure$configure(void);
# 32 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t PhotoP$Atm128AdcConfig$getRefVoltage(void);
#line 25
static   uint8_t PhotoP$Atm128AdcConfig$getChannel(void);
#line 39
static   uint8_t PhotoP$Atm128AdcConfig$getPrescaler(void);
# 31 "/opt/tinyos-2.x/tos/platforms/zigbex/ZigbexBusAdc.nc"
static   uint8_t ZigbexBusP$Adc0$getChannel(void);
#line 31
static   uint8_t ZigbexBusP$Adc1$getChannel(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t /*InteractionC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$Read$read(void);







static  void /*InteractionC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$subRead$readDone(error_t arg_0x7e753480, /*InteractionC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$subRead$val_t arg_0x7e753608);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void UltraredP$ResourceConfigure$unconfigure(void);
#line 49
static   void UltraredP$ResourceConfigure$configure(void);
# 32 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t UltraredP$Atm128AdcConfig$getRefVoltage(void);
#line 25
static   uint8_t UltraredP$Atm128AdcConfig$getChannel(void);
#line 39
static   uint8_t UltraredP$Atm128AdcConfig$getPrescaler(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   void CommunicationWithOPTM$HPLUART$rxDone(uint8_t arg_0x7e38d6b0);
#line 47
static   void CommunicationWithOPTM$HPLUART$txDone(void);
# 26 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/CommunicationWithOPT.nc"
static  void CommunicationWithOPTM$CommunicationWithOPT$RequestLongMSG(uint8_t arg_0x7e7454f0, uint8_t arg_0x7e745678);
static  void CommunicationWithOPTM$CommunicationWithOPT$SpecialControlMSG(uint8_t arg_0x7e745b18, uint8_t arg_0x7e745ca0, uint8_t arg_0x7e745e28, uint8_t arg_0x7e743010, uint8_t *arg_0x7e7431c0, uint8_t arg_0x7e743350);
#line 25
static  void CommunicationWithOPTM$CommunicationWithOPT$RequestSensorMSG(uint8_t arg_0x7e745068);
#line 22
static  void CommunicationWithOPTM$CommunicationWithOPT$SendConfigureMSG(void);
#line 21
static  void CommunicationWithOPTM$CommunicationWithOPT$start(void);


static  void CommunicationWithOPTM$CommunicationWithOPT$SendControlMSG(uint8_t arg_0x7e7466d8, uint8_t arg_0x7e746860, uint8_t arg_0x7e7469e8, uint8_t *arg_0x7e746b98);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t HplAtm128UartP$Uart0Init$init(void);
# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   error_t HplAtm128UartP$HplUart0$enableRxIntr(void);
#line 40
static   error_t HplAtm128UartP$HplUart0$enableTxIntr(void);





static   void HplAtm128UartP$HplUart0$tx(uint8_t arg_0x7e38fbc8);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t HplAtm128UartP$Uart1Init$init(void);
# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   error_t HplAtm128UartP$HplUart1$enableRxIntr(void);
#line 40
static   error_t HplAtm128UartP$HplUart1$enableTxIntr(void);





static   void HplAtm128UartP$HplUart1$tx(uint8_t arg_0x7e38fbc8);
# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t HplAtm128UartP$Uart0RxControl$start(void);
#line 73
static  error_t HplAtm128UartP$Uart1TxControl$start(void);
#line 73
static  error_t HplAtm128UartP$Uart1RxControl$start(void);
#line 73
static  error_t HplAtm128UartP$Uart0TxControl$start(void);
# 30 "/opt/tinyos-2.x/tos/platforms/zigbex/SCSuartDBG.nc"
static   void NoSCSuartDBGC$SCSuartDBG$UARTSend(uint8_t *arg_0x7e7a0088, uint8_t arg_0x7e7a0210);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   void SCSuartDBGM$HPLUART$rxDone(uint8_t arg_0x7e38d6b0);
#line 47
static   void SCSuartDBGM$HPLUART$txDone(void);
# 30 "/opt/tinyos-2.x/tos/platforms/zigbex/SCSuartDBGRecv.nc"
static   void SCSuartDBGM$SCSuartDBGRecv$default$UARTRecv(uint8_t arg_0x7e2e28f8);
# 30 "/opt/tinyos-2.x/tos/platforms/zigbex/SCSuartDBG.nc"
static   void SCSuartDBGM$SCSuartDBG$UARTSend(uint8_t *arg_0x7e7a0088, uint8_t arg_0x7e7a0210);
# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t SCSuartDBGM$StdControl$start(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void TempSensorM$Read_Humidity$readDone(error_t arg_0x7e753480, TempSensorM$Read_Humidity$val_t arg_0x7e753608);
#line 63
static  void TempSensorM$Read_Temp$readDone(error_t arg_0x7e753480, TempSensorM$Read_Temp$val_t arg_0x7e753608);
# 84 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
static  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$measureHumidityDone(error_t arg_0x7e689b70, uint16_t arg_0x7e689d00);
#line 116
static  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$writeStatusRegDone(error_t arg_0x7e6873a0);
#line 100
static  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$readStatusRegDone(error_t arg_0x7e688730, uint8_t arg_0x7e6888b8);
#line 54
static  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$resetDone(error_t arg_0x7e690820);
#line 69
static  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$measureTemperatureDone(error_t arg_0x7e6890f8, uint16_t arg_0x7e689288);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Humidity$read(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$TempResource$granted(void);
# 84 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
static  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$measureHumidityDone(error_t arg_0x7e689b70, uint16_t arg_0x7e689d00);
#line 116
static  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$writeStatusRegDone(error_t arg_0x7e6873a0);
#line 100
static  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$readStatusRegDone(error_t arg_0x7e688730, uint8_t arg_0x7e6888b8);
#line 54
static  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$resetDone(error_t arg_0x7e690820);
#line 69
static  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$measureTemperatureDone(error_t arg_0x7e6890f8, uint16_t arg_0x7e689288);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$HumResource$granted(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Temperature$read(void);
# 2 "LCDSetter.nc"
static  void SerialAppM$LCDSetter$init(void);
static  void SerialAppM$LCDSetter$setLCD(uint8_t arg_0x7ef43030, float arg_0x7ef431b0, float arg_0x7ef43330, float arg_0x7ef434b0);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void SerialAppM$Timer$startPeriodic(uint32_t arg_0x7ef81a70);
# 19 "SerialAppM.nc"
static float *SerialAppM$getValues(uint16_t newValue);

typedef enum SerialAppM$__nesc_unnamed4325 {
#line 21
  SerialAppM$TEMP, SerialAppM$HUMID, SerialAppM$UR
} 
#line 21
SerialAppM$TYPE;
uint8_t SerialAppM$turn;

static inline void SerialAppM$initC(void);





static inline  void SerialAppM$Boot$booted(void);




static inline  void SerialAppM$Timer$fired(void);

static inline  void SerialAppM$TempSensor$done(uint16_t temp, uint16_t humid);
#line 52
static float *SerialAppM$getValues(uint16_t newValue);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP$MoteInit$init(void);
#line 51
static  error_t PlatformP$MeasureClock$init(void);
# 42 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void);






static inline  error_t PlatformP$Init$init(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t MotePlatformP$SubInit$init(void);
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void MotePlatformP$SerialIdPin$makeInput(void);
#line 30
static   void MotePlatformP$SerialIdPin$clr(void);
# 26 "/opt/tinyos-2.x/tos/platforms/zigbex/MotePlatformP.nc"
static inline  error_t MotePlatformP$PlatformInit$init(void);
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   bool /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$get(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void);
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$get(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void);
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$get(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void);
#line 47
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void);


static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP$14$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP$14$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP$14$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$clr(void);


static __inline   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$makeInput(void);

static __inline   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$makeOutput(void);
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$get(void);
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$clr(void);


static __inline   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeInput(void);

static __inline   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeOutput(void);
# 33 "/opt/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC$__nesc_unnamed4326 {


  MeasureClockC$MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC$cycles;

static inline  error_t MeasureClockC$Init$init(void);
#line 103
static inline   uint8_t MeasureClockC$Atm128Calibrate$adcPrescaler(void);
#line 120
static inline   uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t baudrate);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RealMainP$SoftwareInit$init(void);
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void RealMainP$Boot$booted(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RealMainP$PlatformInit$init(void);
# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static  void RealMainP$Scheduler$init(void);
#line 61
static  void RealMainP$Scheduler$taskLoop(void);
#line 54
static  bool RealMainP$Scheduler$runNextTask(void);
# 52 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
int main(void)   ;
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$runTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7f062030);
# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void SchedulerBasicP$McuSleep$sleep(void);
# 50 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4327 {

  SchedulerBasicP$NUM_TASKS = 19U, 
  SchedulerBasicP$NO_TASK = 255
};

volatile uint8_t SchedulerBasicP$m_head;
volatile uint8_t SchedulerBasicP$m_tail;
volatile uint8_t SchedulerBasicP$m_next[SchedulerBasicP$NUM_TASKS];








static __inline uint8_t SchedulerBasicP$popTask(void);
#line 86
static inline bool SchedulerBasicP$isWaiting(uint8_t id);




static inline bool SchedulerBasicP$pushTask(uint8_t id);
#line 113
static inline  void SchedulerBasicP$Scheduler$init(void);









static  bool SchedulerBasicP$Scheduler$runNextTask(void);
#line 138
static inline  void SchedulerBasicP$Scheduler$taskLoop(void);
#line 159
static   error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id);




static   void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 54 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static   mcu_power_t McuSleepC$McuPowerOverride$lowestState(void);
# 58 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
const_uint8_t McuSleepC$atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 3, ((
1 << 2) | (1 << 4)) | (1 << 3), (
1 << 4) | (1 << 3), (
1 << 2) | (1 << 4), 
1 << 4 };

static inline mcu_power_t McuSleepC$getPowerState(void);
#line 111
static inline   void McuSleepC$McuSleep$sleep(void);
#line 123
static inline   void McuSleepC$McuPowerState$update(void);


static inline    mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer0AsyncC$Compare$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void HplAtm128Timer0AsyncC$Timer$overflow(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline  error_t HplAtm128Timer0AsyncC$Init$init(void);





static inline   uint8_t HplAtm128Timer0AsyncC$Timer$get(void);


static inline   void HplAtm128Timer0AsyncC$Timer$set(uint8_t t);
#line 71
static inline   void HplAtm128Timer0AsyncC$Timer$setScale(uint8_t s);






static inline   Atm128TimerControl_t HplAtm128Timer0AsyncC$TimerCtrl$getControl(void);




static inline   void HplAtm128Timer0AsyncC$TimerCtrl$setControl(Atm128TimerControl_t x);
#line 103
static inline   Atm128_TIFR_t HplAtm128Timer0AsyncC$TimerCtrl$getInterruptFlag(void);
#line 117
static inline   void HplAtm128Timer0AsyncC$Timer$start(void);


static inline bool HplAtm128Timer0AsyncC$overflowed(void);



static inline   bool HplAtm128Timer0AsyncC$Timer$test(void);





static inline   void HplAtm128Timer0AsyncC$Compare$reset(void);
static inline   void HplAtm128Timer0AsyncC$Compare$start(void);
static inline   void HplAtm128Timer0AsyncC$Compare$stop(void);
#line 144
static inline   void HplAtm128Timer0AsyncC$Compare$set(uint8_t t);









static void HplAtm128Timer0AsyncC$stabiliseTimer0(void);






void __vector_15(void) __attribute((signal))   ;





void __vector_16(void) __attribute((signal))   ;
# 95 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$setScale(uint8_t arg_0x7eb14428);
#line 58
static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$set(/*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$timer_size arg_0x7eb217b0);










static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$start(void);
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Init$init(void);








static inline   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$overflow(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$fired(void);
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset(void);
#line 45
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type arg_0x7eaf5010);










static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$start(void);


static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop(void);
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$get(void);
# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$stop(void);








static inline   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size t0, /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size dt);
#line 110
static inline   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void);






static inline   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$overflow(void);
# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   bool /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$test(void);
#line 52
static   /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$timer_size /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$get(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$timer_size /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$get(void);




static inline   bool /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$isOverflowPending(void);









static inline   void /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$overflow(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$fired(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$get(void);






static   bool /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$isOverflowPending(void);










static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$overflow(void);
# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$startAt(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$size_type arg_0x7eb449e0, /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$size_type arg_0x7eb44b70);
#line 62
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$stop(void);
# 68 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmCounterC.nc"
/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$upper_count_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_upper;
/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_t0;
/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt;
uint8_t /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_skip_overflows;

enum /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$__nesc_unnamed4328 {

  TransformAlarmCounterC$0$MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_size_type ) - 1 - 0, 
  TransformAlarmCounterC$0$MAX_DELAY = (/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type )1 << /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$MAX_DELAY_LOG2
};

enum /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$__nesc_unnamed4329 {

  TransformAlarmCounterC$0$LOW_SHIFT_RIGHT = 0, 
  TransformAlarmCounterC$0$HIGH_SHIFT_LEFT = 8 * sizeof(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_size_type ) - /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$LOW_SHIFT_RIGHT, 
  TransformAlarmCounterC$0$NUM_UPPER_BITS = 8 * sizeof(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type ) - 8 * sizeof(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_size_type ) + 0, 



  TransformAlarmCounterC$0$OVERFLOW_MASK = /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$NUM_UPPER_BITS ? ((/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$upper_count_type )2 << (/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$NUM_UPPER_BITS - 1)) - 1 : 0
};

static void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$set_alarm(void);

static   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$get(void);
#line 145
static inline   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$overflow(void);
#line 158
static inline   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$getNow(void);




static inline   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$getAlarm(void);









static inline   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$stop(void);




static void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$set_alarm(void);
#line 221
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$startAt(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type t0, /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type dt);
#line 236
static inline   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$fired(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void);
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void);
#line 92
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7eb449e0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7eb44b70);
#line 105
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void);
#line 62
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void);
# 63 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4330 {
#line 63
  AlarmToTimerC$0$fired = 0U
};
#line 63
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired];
#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot);
#line 60
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void);


static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void);






static inline   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void);
#line 82
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);


static inline  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void);
# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void);
#line 118
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t arg_0x7ef72cd0, uint32_t arg_0x7ef72e60);
#line 67
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e976cd8);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4331 {
#line 60
  VirtualizeTimerC$0$updateFromTimer = 1U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4332 {

  VirtualizeTimerC$0$NUM_TIMERS = 13, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4333 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 88
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void);
#line 127
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt);




static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);




static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num);
#line 192
static inline   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void);
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void LedControllerM$MorseTimer$startOneShot(uint32_t arg_0x7ef80068);




static  void LedControllerM$MorseTimer$stop(void);
#line 62
static  void LedControllerM$CompleteTimer$startOneShot(uint32_t arg_0x7ef80068);
# 50 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static   void LedControllerM$Leds$led0Off(void);










static   void LedControllerM$Leds$led1On(void);
#line 106
static   uint8_t LedControllerM$Leds$get(void);
#line 66
static   void LedControllerM$Leds$led1Off(void);
#line 83
static   void LedControllerM$Leds$led2Off(void);
#line 45
static   void LedControllerM$Leds$led0On(void);
#line 78
static   void LedControllerM$Leds$led2On(void);
# 22 "LedControllerM.nc"
static void LedControllerM$setDigit(uint8_t mask);

static inline void LedControllerM$clearDigit(void);







uint8_t LedControllerM$currentMorseNumber[2];
uint8_t LedControllerM$currentMorseIndex = 0;
#line 50
static uint8_t LedControllerM$isCleared = 0;


static uint8_t LedControllerM$CompleteTimerIterator = 0;



static inline  void LedControllerM$CompleteTimer$fired(void);
#line 90
static inline  void LedControllerM$MorseTimer$fired(void);
#line 186
static void LedControllerM$setDigit(uint8_t mask);







static inline void LedControllerM$clearDigit(void);








static inline  void LedControllerM$LedTimer0$fired(void);


static inline  void LedControllerM$LedTimer1$fired(void);


static inline  void LedControllerM$LedTimer2$fired(void);
# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   bool LedsP$Led0$get(void);


static   void LedsP$Led0$makeOutput(void);
#line 29
static   void LedsP$Led0$set(void);
static   void LedsP$Led0$clr(void);

static   bool LedsP$Led1$get(void);


static   void LedsP$Led1$makeOutput(void);
#line 29
static   void LedsP$Led1$set(void);
static   void LedsP$Led1$clr(void);

static   bool LedsP$Led2$get(void);


static   void LedsP$Led2$makeOutput(void);
#line 29
static   void LedsP$Led2$set(void);
static   void LedsP$Led2$clr(void);
# 45 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline  error_t LedsP$Init$init(void);
#line 63
static inline   void LedsP$Leds$led0On(void);




static inline   void LedsP$Leds$led0Off(void);









static inline   void LedsP$Leds$led1On(void);




static inline   void LedsP$Leds$led1Off(void);









static inline   void LedsP$Leds$led2On(void);




static inline   void LedsP$Leds$led2Off(void);









static   uint8_t LedsP$Leds$get(void);
# 28 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/Interaction.nc"
static  void LCDSetterM$Interaction$Process_CMD(void *arg_0x7e7a8a80, uint8_t arg_0x7e7a8c08);
#line 24
static  void LCDSetterM$Interaction$SetSamplingTime(uint16_t arg_0x7e7b0c70);
#line 21
static  void LCDSetterM$Interaction$StartConfiguration(App_struct_t *arg_0x7e7b01b8);
# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t LCDSetterM$SCSuartDBGstd$start(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t LCDSetterM$TryToConfigure$postTask(void);
# 30 "/opt/tinyos-2.x/tos/platforms/zigbex/SCSuartDBG.nc"
static   void LCDSetterM$SCSuartDBG$UARTSend(uint8_t *arg_0x7e7a0088, uint8_t arg_0x7e7a0210);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void LCDSetterM$Timer$startPeriodic(uint32_t arg_0x7ef81a70);
# 44 "LCDSetterM.nc"
enum LCDSetterM$__nesc_unnamed4334 {
#line 44
  LCDSetterM$TryToConfigure = 2U
};
#line 44
typedef int LCDSetterM$__nesc_sillytask_TryToConfigure[LCDSetterM$TryToConfigure];
enum LCDSetterM$__nesc_unnamed4335 {
#line 45
  LCDSetterM$TryToSetTimer = 3U
};
#line 45
typedef int LCDSetterM$__nesc_sillytask_TryToSetTimer[LCDSetterM$TryToSetTimer];
#line 37
 App_struct_t LCDSetterM$AP_Frame;
 uint8_t LCDSetterM$MsgBuff[64];
#line 38
 uint8_t LCDSetterM$myAppType;
#line 38
 uint8_t LCDSetterM$myOptType;
#line 38
 uint8_t LCDSetterM$LCDDisplayType;
 float LCDSetterM$LCDvalue;
#line 39
 float LCDSetterM$LCDavg;
#line 39
 float LCDSetterM$LCDstdev;




static inline  void LCDSetterM$TryToConfigure$runTask(void);
static inline  void LCDSetterM$TryToSetTimer$runTask(void);


static inline  void LCDSetterM$LCDSetter$init(void);






static inline  void LCDSetterM$Interaction$StartDoneConfiguration(uint8_t appType, uint8_t optType);
#line 72
static inline  void LCDSetterM$Interaction$getSensorDataDone(App_struct_t *App_Payload, uint8_t App_size);




static inline  void LCDSetterM$Interaction$Urgency_Data(uint8_t *Urgency_Payload, uint8_t len);



typedef enum LCDSetterM$__nesc_unnamed4336 {
#line 81
  LCDSetterM$TEMP, LCDSetterM$HUMID, LCDSetterM$UR
} 
#line 81
LCDSetterM$TYPE;
static inline char *LCDSetterM$getType(void);




static inline  void LCDSetterM$Timer$fired(void);
#line 112
static inline  void LCDSetterM$LCDSetter$setLCD(uint8_t type, float value, float avg, float stdev);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void InteractionM$SensorCheckTimer$startPeriodic(uint32_t arg_0x7ef81a70);








static  void InteractionM$SensorCheckTimer$startOneShot(uint32_t arg_0x7ef80068);




static  void InteractionM$SensorCheckTimer$stop(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t InteractionM$SendBasicSensor$postTask(void);
#line 56
static   error_t InteractionM$Event_Urgency_Data$postTask(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void InteractionM$C328_Reset_Timer$startPeriodic(uint32_t arg_0x7ef81a70);
#line 67
static  void InteractionM$C328_Reset_Timer$stop(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t InteractionM$Read_Humi$read(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t InteractionM$ProcessCMD$postTask(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t InteractionM$Read_Ultrared$read(void);
# 22 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/Interaction.nc"
static  void InteractionM$Interaction$StartDoneConfiguration(uint8_t arg_0x7e7b0648, uint8_t arg_0x7e7b07d0);



static  void InteractionM$Interaction$getSensorDataDone(App_struct_t *arg_0x7e7a8448, uint8_t arg_0x7e7a85d8);


static  void InteractionM$Interaction$Urgency_Data(uint8_t *arg_0x7e7a70d8, uint8_t arg_0x7e7a7260);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t InteractionM$Read_Photo$read(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t InteractionM$Set_C328_Restart_Timer_START$postTask(void);
# 26 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/CommunicationWithOPT.nc"
static  void InteractionM$CommunicationWithOPT$RequestLongMSG(uint8_t arg_0x7e7454f0, uint8_t arg_0x7e745678);
static  void InteractionM$CommunicationWithOPT$SpecialControlMSG(uint8_t arg_0x7e745b18, uint8_t arg_0x7e745ca0, uint8_t arg_0x7e745e28, uint8_t arg_0x7e743010, uint8_t *arg_0x7e7431c0, uint8_t arg_0x7e743350);
#line 25
static  void InteractionM$CommunicationWithOPT$RequestSensorMSG(uint8_t arg_0x7e745068);
#line 22
static  void InteractionM$CommunicationWithOPT$SendConfigureMSG(void);
#line 21
static  void InteractionM$CommunicationWithOPT$start(void);


static  void InteractionM$CommunicationWithOPT$SendControlMSG(uint8_t arg_0x7e7466d8, uint8_t arg_0x7e746860, uint8_t arg_0x7e7469e8, uint8_t *arg_0x7e746b98);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t InteractionM$TaskStartDoneConfiguration$postTask(void);
#line 56
static   error_t InteractionM$TryToGetSensorData$postTask(void);
#line 56
static   error_t InteractionM$TaskGetSensorDataDone$postTask(void);
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void InteractionM$ConfigTimeout$startOneShot(uint32_t arg_0x7ef80068);




static  void InteractionM$ConfigTimeout$stop(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t InteractionM$Read_Temp$read(void);
# 30 "/opt/tinyos-2.x/tos/platforms/zigbex/SCSuartDBG.nc"
static   void InteractionM$SCSuartDBG$UARTSend(uint8_t *arg_0x7e7a0088, uint8_t arg_0x7e7a0210);
# 56 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
enum InteractionM$__nesc_unnamed4337 {
#line 56
  InteractionM$TaskStartDoneConfiguration = 4U
};
#line 56
typedef int InteractionM$__nesc_sillytask_TaskStartDoneConfiguration[InteractionM$TaskStartDoneConfiguration];
enum InteractionM$__nesc_unnamed4338 {
#line 57
  InteractionM$TaskGetSensorDataDone = 5U
};
#line 57
typedef int InteractionM$__nesc_sillytask_TaskGetSensorDataDone[InteractionM$TaskGetSensorDataDone];








enum InteractionM$__nesc_unnamed4339 {
#line 66
  InteractionM$Set_C328_Restart_Timer_START = 6U
};
#line 66
typedef int InteractionM$__nesc_sillytask_Set_C328_Restart_Timer_START[InteractionM$Set_C328_Restart_Timer_START];
#line 134
enum InteractionM$__nesc_unnamed4340 {
#line 134
  InteractionM$Event_Urgency_Data = 7U
};
#line 134
typedef int InteractionM$__nesc_sillytask_Event_Urgency_Data[InteractionM$Event_Urgency_Data];
#line 211
enum InteractionM$__nesc_unnamed4341 {
#line 211
  InteractionM$TryToGetSensorData = 8U
};
#line 211
typedef int InteractionM$__nesc_sillytask_TryToGetSensorData[InteractionM$TryToGetSensorData];
#line 293
enum InteractionM$__nesc_unnamed4342 {
#line 293
  InteractionM$ProcessCMD = 9U
};
#line 293
typedef int InteractionM$__nesc_sillytask_ProcessCMD[InteractionM$ProcessCMD];
#line 339
enum InteractionM$__nesc_unnamed4343 {
#line 339
  InteractionM$SendBasicSensor = 10U
};
#line 339
typedef int InteractionM$__nesc_sillytask_SendBasicSensor[InteractionM$SendBasicSensor];
#line 44
 uint8_t InteractionM$MyAppType;
#line 44
 uint8_t InteractionM$MyOptType;
#line 44
 uint8_t InteractionM$Seq_For_LongData = 0;
#line 44
 uint8_t InteractionM$Return_App_Size;
 uint16_t InteractionM$MyTemp = 0xFFFF;
#line 45
 uint16_t InteractionM$MyHumi = 0xFFFF;
#line 45
 uint16_t InteractionM$MyPhoto = 0xFFFF;
#line 45
 uint16_t InteractionM$MyUltrared = 0xFFFF;
#line 45
 uint16_t InteractionM$MySampleI;
 App_struct_t *InteractionM$MyAppPack;
 uint8_t InteractionM$IC_DBG_buff[32];
#line 47
 uint8_t InteractionM$ControlCmd1 = 0;
#line 47
 uint8_t InteractionM$ControlCmd2 = 0;
#line 47
 uint8_t InteractionM$TestSeq = 0;
#line 47
 uint8_t InteractionM$StartFlag = 0;
#line 47
 uint8_t InteractionM$C328_Restart_Flag = 0;
 Cmd_struct_t InteractionM$RecvCMD;

 uint8_t InteractionM$C328_Reset_Timer_Check;
#line 50
 uint8_t InteractionM$C328_Reset_Timer_Counter;





static inline  void InteractionM$TaskStartDoneConfiguration$runTask(void);
static inline  void InteractionM$TaskGetSensorDataDone$runTask(void);


static void InteractionM$SetC327_Check_Value(uint8_t check_value);





static inline  void InteractionM$Set_C328_Restart_Timer_START$runTask(void);




static inline  void InteractionM$Interaction$StartConfiguration(App_struct_t *App_Payload);
#line 86
static inline   void InteractionM$CommunicationWithOPT$parsing_config(uint8_t *RecvMsg);
#line 105
static inline  void InteractionM$ConfigTimeout$fired(void);








static inline   void InteractionM$CommunicationWithOPT$parsing_sensor(uint8_t *RecvMsg);
#line 133
configuration_sampling_struct_t InteractionM$Urgency_MSG;
static inline  void InteractionM$Event_Urgency_Data$runTask(void);



static inline   void InteractionM$CommunicationWithOPT$parsing_control(uint8_t *RecvMsg);
#line 175
static inline   void InteractionM$CommunicationWithOPT$parsing_longDT(uint8_t *RecvMsg);
#line 211
static inline  void InteractionM$TryToGetSensorData$runTask(void);
#line 236
static inline  void InteractionM$C328_Reset_Timer$fired(void);
#line 275
static inline  void InteractionM$Interaction$SetSamplingTime(uint16_t SamplingInfo);
#line 287
static inline  void InteractionM$SensorCheckTimer$fired(void);





static inline  void InteractionM$ProcessCMD$runTask(void);
#line 331
static inline  void InteractionM$Interaction$Process_CMD(void *PayLoad, uint8_t CMD_Len);







static inline  void InteractionM$SendBasicSensor$runTask(void);
#line 357
static inline  void InteractionM$Read_Temp$readDone(error_t err, uint16_t val);





static inline  void InteractionM$Read_Humi$readDone(error_t err, uint16_t val);





static inline  void InteractionM$Read_Photo$readDone(error_t err, uint16_t val);





static inline  void InteractionM$Read_Ultrared$readDone(error_t err, uint16_t val);
# 76 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
static  error_t /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureHumidity(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$readDone(error_t arg_0x7e753480, /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$val_t arg_0x7e753608);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$release(void);
#line 78
static   error_t /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$request(void);
# 61 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
static  error_t /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureTemperature(void);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$release(void);
#line 78
static   error_t /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$request(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$readDone(error_t arg_0x7e753480, /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$val_t arg_0x7e753608);
# 53 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  error_t /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$read(void);




static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$granted(void);







static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureTemperatureDone(error_t result, uint16_t val);




static inline  error_t /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$read(void);




static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$granted(void);







static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureHumidityDone(error_t result, uint16_t val);




static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$resetDone(error_t result);
static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureHumidityDone(error_t result, uint16_t val);
static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$readStatusRegDone(error_t result, uint8_t val);
static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$writeStatusRegDone(error_t result);

static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$resetDone(error_t result);
static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureTemperatureDone(error_t result, uint16_t val);
static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$readStatusRegDone(error_t result, uint8_t val);
static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$writeStatusRegDone(error_t result);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$disable(void);
#line 43
static   error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$enableFallingEdge(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readSensor$postTask(void);
#line 56
static   error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone$postTask(void);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$makeOutput(void);
#line 29
static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$set(void);
static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr(void);
# 84 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureHumidityDone(
# 54 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e657200, 
# 84 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
error_t arg_0x7e689b70, uint16_t arg_0x7e689d00);
#line 116
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$writeStatusRegDone(
# 54 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e657200, 
# 116 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
error_t arg_0x7e6873a0);
#line 100
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$readStatusRegDone(
# 54 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e657200, 
# 100 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
error_t arg_0x7e688730, uint8_t arg_0x7e6888b8);
#line 54
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$resetDone(
# 54 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e657200, 
# 54 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
error_t arg_0x7e690820);
#line 69
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureTemperatureDone(
# 54 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
uint8_t arg_0x7e657200, 
# 69 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
error_t arg_0x7e6890f8, uint16_t arg_0x7e689288);
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeInput(void);
#line 32
static   bool /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$get(void);


static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeOutput(void);
#line 29
static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set(void);
static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$clr(void);
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$startOneShot(uint32_t arg_0x7ef80068);




static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$stop(void);
# 102 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
enum /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$__nesc_unnamed4344 {
#line 102
  SensirionSht11LogicP$0$readSensor = 11U
};
#line 102
typedef int /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$__nesc_sillytask_readSensor[/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readSensor];
enum /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$__nesc_unnamed4345 {
#line 103
  SensirionSht11LogicP$0$signalStatusDone = 12U
};
#line 103
typedef int /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$__nesc_sillytask_signalStatusDone[/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone];
#line 72
#line 66
typedef enum /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$__nesc_unnamed4346 {
  SensirionSht11LogicP$0$CMD_MEASURE_TEMPERATURE = 0x3, 
  SensirionSht11LogicP$0$CMD_MEASURE_HUMIDITY = 0x5, 
  SensirionSht11LogicP$0$CMD_READ_STATUS = 0x7, 
  SensirionSht11LogicP$0$CMD_WRITE_STATUS = 0x6, 
  SensirionSht11LogicP$0$CMD_SOFT_RESET = 0x1E
} /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$sht_cmd_t;

enum /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$__nesc_unnamed4347 {
  SensirionSht11LogicP$0$TIMEOUT_RESET = 11, 
  SensirionSht11LogicP$0$TIMEOUT_14BIT = 350, 
  SensirionSht11LogicP$0$TIMEOUT_12BIT = 350, 
  SensirionSht11LogicP$0$TIMEOUT_8BIT = 350
};

bool /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$on = TRUE;
bool /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = FALSE;
uint8_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$status = 0;
/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$sht_cmd_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$cmd;
uint8_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$newStatus;
bool /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$writeFail = FALSE;

uint8_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$currentClient;

static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$performCommand(void);
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$initPins(void);
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$resetDevice(void);
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$transmissionStart(void);
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$sendCommand(uint8_t _cmd);
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$writeByte(uint8_t byte);
static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$waitForResponse(void);
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$enableInterrupt(void);
static uint8_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readByte(void);
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$ack(void);
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$endTransmission(void);
#line 113
static  error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureTemperature(uint8_t client);







static  error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureHumidity(uint8_t client);
#line 149
static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$performCommand(void);
#line 220
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$initPins(void);







static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$resetDevice(void);










static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$transmissionStart(void);
#line 251
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$sendCommand(uint8_t _cmd);



static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$writeByte(uint8_t byte);
#line 268
static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$waitForResponse(void);
#line 281
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$enableInterrupt(void);





static inline  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$fired(void);
#line 315
static inline   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$fired(void);




static inline  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readSensor$runTask(void);
#line 355
static uint8_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readByte(void);
#line 372
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$ack(void);








static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$endTransmission(void);






static inline  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone$runTask(void);
#line 406
static inline   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$resetDone(uint8_t client, error_t result);
static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$measureTemperatureDone(uint8_t client, error_t result, uint16_t val);
static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$measureHumidityDone(uint8_t client, error_t result, uint16_t val);
static inline   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$readStatusRegDone(uint8_t client, error_t result, uint8_t val);
static inline   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$writeStatusRegDone(uint8_t client, error_t result);
# 88 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void HplSensirionSht11P$SplitControl$startDone(error_t arg_0x7e5e4330);
#line 110
static  void HplSensirionSht11P$SplitControl$stopDone(error_t arg_0x7e5e4e68);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t HplSensirionSht11P$stopTask$postTask(void);
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplSensirionSht11P$SCK$makeInput(void);
#line 30
static   void HplSensirionSht11P$SCK$clr(void);


static   void HplSensirionSht11P$DATA$makeInput(void);
#line 30
static   void HplSensirionSht11P$DATA$clr(void);
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void HplSensirionSht11P$Timer$startOneShot(uint32_t arg_0x7ef80068);
# 49 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/HplSensirionSht11P.nc"
enum HplSensirionSht11P$__nesc_unnamed4348 {
#line 49
  HplSensirionSht11P$stopTask = 13U
};
#line 49
typedef int HplSensirionSht11P$__nesc_sillytask_stopTask[HplSensirionSht11P$stopTask];

static inline  error_t HplSensirionSht11P$SplitControl$start(void);




static inline  void HplSensirionSht11P$Timer$fired(void);



static inline  error_t HplSensirionSht11P$SplitControl$stop(void);








static inline  void HplSensirionSht11P$stopTask$runTask(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void HplAtm128InterruptSigP$IntSig6$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig1$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig4$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig7$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig2$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig5$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig0$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig3$fired(void);
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
void __vector_1(void) __attribute((signal))   ;




void __vector_2(void) __attribute((signal))   ;




void __vector_3(void) __attribute((signal))   ;




void __vector_4(void) __attribute((signal))   ;




void __vector_5(void) __attribute((signal))   ;




void __vector_6(void) __attribute((signal))   ;




void __vector_7(void) __attribute((signal))   ;




void __vector_8(void) __attribute((signal))   ;
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$clear(void);
static __inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$enable(void);
static __inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$disable(void);



static __inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$edge(bool low_to_high);
#line 61
static inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$default$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$default$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void);
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear(void);
#line 40
static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable(void);
#line 59
static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(bool arg_0x7e5c8088);
#line 35
static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$fired(void);
# 15 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static error_t /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$enable(bool rising);
#line 29
static inline   error_t /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void);



static inline   error_t /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$disable(void);




static inline   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void);
# 39 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$__nesc_unnamed4349 {
#line 39
  FcfsResourceQueueC$0$NO_ENTRY = 0xFF
};
uint8_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[4U];
uint8_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
uint8_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

static inline  error_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void);




static inline   bool /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void);



static inline   bool /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id);



static inline   resource_client_id_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void);
#line 72
static inline   error_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e5436c8);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(
# 59 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e542910);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(
# 59 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e542910);
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x7e552010);
#line 43
static   bool /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Queue$isEmpty(void);
#line 60
static   resource_client_id_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Queue$dequeue(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceController$requested(void);
#line 46
static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceController$granted(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$granted(
# 53 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e544d40);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void);
# 73 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4350 {
#line 73
  ArbiterP$0$grantedTask = 14U
};
#line 73
typedef int /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$__nesc_sillytask_grantedTask[/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask];
#line 66
enum /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4351 {
#line 66
  ArbiterP$0$RES_CONTROLLED, ArbiterP$0$RES_GRANTING, ArbiterP$0$RES_IMM_GRANTING, ArbiterP$0$RES_BUSY
};
#line 67
enum /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4352 {
#line 67
  ArbiterP$0$CONTROLLER_ID = 4U
};
uint8_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$state = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED;
 uint8_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$resId = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$CONTROLLER_ID;
 uint8_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$reqResId;



static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$request(uint8_t id);
#line 106
static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$release(uint8_t id);
#line 125
static inline   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceController$release(void);
#line 172
static inline  void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void);
#line 184
static inline   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(uint8_t id);

static inline    void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id);
#line 198
static inline    void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline    void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 79 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$start(void);
#line 102
static  error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$stop(void);
# 52 "/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
static   void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$PowerDownCleanup$cleanup(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopTask$postTask(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
static   error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$release(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$startTask$postTask(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$start(void);








static  error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$stop(void);
# 63 "/opt/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
enum /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$__nesc_unnamed4353 {
#line 63
  PowerManagerP$0$startTask = 15U
};
#line 63
typedef int /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$__nesc_sillytask_startTask[/*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$startTask];




enum /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$__nesc_unnamed4354 {
#line 68
  PowerManagerP$0$stopTask = 16U
};
#line 68
typedef int /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$__nesc_sillytask_stopTask[/*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopTask];
#line 60
 bool /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopping = FALSE;
 bool /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$requested = FALSE;

static inline  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$startTask$runTask(void);




static inline  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopTask$runTask(void);





static inline   void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$requested(void);









static inline   error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$default$start(void);







static inline  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$startDone(error_t error);



static inline   void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$granted(void);




static inline  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$stopDone(error_t error);










static inline   error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$default$stop(void);







static inline    void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$PowerDownCleanup$default$cleanup(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void /*InteractionC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$readDone(error_t arg_0x7e753480, /*InteractionC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$val_t arg_0x7e753608);
#line 55
static  error_t /*InteractionC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$read(void);
# 33 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/ADC_ShiftM.nc"
static inline  error_t /*InteractionC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$read(void);



static inline  void /*InteractionC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$readDone(error_t result, uint16_t val);
# 110 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static   bool Atm128AdcP$Atm128AdcMultiple$dataReady(uint16_t arg_0x7e4a1a68, bool arg_0x7e4a1bf0, uint8_t arg_0x7e4a1d78, 
uint8_t *arg_0x7e4a0010, uint8_t *arg_0x7e4a01c0);
# 72 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static   void Atm128AdcP$Atm128AdcSingle$dataReady(uint16_t arg_0x7e4a78b8, bool arg_0x7e4a7a40);
# 44 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
static   Atm128Admux_t Atm128AdcP$HplAtm128Adc$getAdmux(void);
#line 73
static   void Atm128AdcP$HplAtm128Adc$enableAdc(void);
#line 49
static   void Atm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t arg_0x7e493da8);
#line 141
static   bool Atm128AdcP$HplAtm128Adc$cancel(void);
#line 77
static   void Atm128AdcP$HplAtm128Adc$disableAdc(void);








static   void Atm128AdcP$HplAtm128Adc$disableInterruption(void);
#line 60
static   void Atm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t arg_0x7e4916f8);
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static   uint8_t Atm128AdcP$Atm128Calibrate$adcPrescaler(void);
# 82 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
#line 78
struct Atm128AdcP$__nesc_unnamed4355 {
  bool multiple : 1;
  bool precise : 1;
  uint8_t channel : 5;
} Atm128AdcP$f;
#line 82
#line 78
struct Atm128AdcP$__nesc_unnamed4355 



Atm128AdcP$nextF;

static inline  error_t Atm128AdcP$Init$init(void);
#line 104
static inline   error_t Atm128AdcP$AsyncStdControl$start(void);




static inline   error_t Atm128AdcP$AsyncStdControl$stop(void);









static __inline bool Atm128AdcP$isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage);




static inline   void Atm128AdcP$HplAtm128Adc$dataReady(uint16_t data);
#line 184
static inline void Atm128AdcP$getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler);
#line 208
static inline   bool Atm128AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler);
#line 242
static inline    bool Atm128AdcP$Atm128AdcMultiple$default$dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage);
# 147 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
static   void HplAtm128AdcP$HplAtm128Adc$dataReady(uint16_t arg_0x7e48a120);
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void HplAtm128AdcP$McuPowerState$update(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline   Atm128Admux_t HplAtm128AdcP$HplAtm128Adc$getAdmux(void);


static inline   Atm128Adcsra_t HplAtm128AdcP$HplAtm128Adc$getAdcsra(void);


static inline   uint16_t HplAtm128AdcP$HplAtm128Adc$getValue(void);



static inline uint8_t HplAtm128AdcP$Admux2int(Atm128Admux_t x);
static inline uint8_t HplAtm128AdcP$Adcsra2int(Atm128Adcsra_t x);


static inline   void HplAtm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t x);


static inline   void HplAtm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t x);
#line 71
static inline   void HplAtm128AdcP$HplAtm128Adc$enableAdc(void);



static inline   void HplAtm128AdcP$HplAtm128Adc$disableAdc(void);




static inline   void HplAtm128AdcP$HplAtm128Adc$disableInterruption(void);
#line 101
void __vector_21(void) __attribute((signal))   ;








static inline   bool HplAtm128AdcP$HplAtm128Adc$cancel(void);
# 39 "/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
enum /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$__nesc_unnamed4356 {
#line 39
  RoundRobinResourceQueueC$0$NO_ENTRY = 0xFF
};
uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[(2U - 1) / 8 + 1];
uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$last = 0;

static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$clearEntry(uint8_t id);



static inline  error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void);




static inline   bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty(void);








static   bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(resource_client_id_t id);



static inline   resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue(void);
#line 84
static inline   error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(resource_client_id_t id);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceRequested$requested(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e5436c8);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$unconfigure(
# 59 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e542910);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$configure(
# 59 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e542910);
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Queue$enqueue(resource_client_id_t arg_0x7e552010);
#line 43
static   bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Queue$isEmpty(void);
#line 60
static   resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Queue$dequeue(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceController$requested(void);
#line 46
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceController$granted(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$granted(
# 53 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7e544d40);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask$postTask(void);
# 73 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$__nesc_unnamed4357 {
#line 73
  ArbiterP$1$grantedTask = 17U
};
#line 73
typedef int /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$__nesc_sillytask_grantedTask[/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask];
#line 66
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$__nesc_unnamed4358 {
#line 66
  ArbiterP$1$RES_CONTROLLED, ArbiterP$1$RES_GRANTING, ArbiterP$1$RES_IMM_GRANTING, ArbiterP$1$RES_BUSY
};
#line 67
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$__nesc_unnamed4359 {
#line 67
  ArbiterP$1$CONTROLLER_ID = 2U
};
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$RES_CONTROLLED;
 uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$CONTROLLER_ID;
 uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$reqResId;



static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$request(uint8_t id);
#line 106
static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$release(uint8_t id);
#line 125
static inline   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceController$release(void);
#line 172
static inline  void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask$runTask(void);
#line 184
static inline   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$default$granted(uint8_t id);

static inline    void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceRequested$default$requested(uint8_t id);
#line 198
static inline    void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$default$configure(uint8_t id);

static inline    void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$default$unconfigure(uint8_t id);
# 52 "/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
static   void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$cleanup(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
static   error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$release(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static   error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$start(void);








static   error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$stop(void);
# 59 "/opt/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline   void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$requested(void);









static inline   void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$granted(void);




static inline    void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void AdcP$Read$readDone(
# 48 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7e412610, 
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
error_t arg_0x7e753480, AdcP$Read$val_t arg_0x7e753608);
# 65 "/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
static   void AdcP$ReadNow$readDone(
# 49 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7e411440, 
# 65 "/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
error_t arg_0x7e4b5b10, AdcP$ReadNow$val_t arg_0x7e4b5c98);
# 32 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t AdcP$Atm128AdcConfig$getRefVoltage(
# 53 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7e40e748);
# 25 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t AdcP$Atm128AdcConfig$getChannel(
# 53 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7e40e748);
# 39 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t AdcP$Atm128AdcConfig$getPrescaler(
# 53 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7e40e748);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static   bool AdcP$Atm128AdcSingle$getData(uint8_t arg_0x7e4a8868, uint8_t arg_0x7e4a89f8, 
bool arg_0x7e4a8b98, uint8_t arg_0x7e4a8d28);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t AdcP$acquiredData$postTask(void);
# 103 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
enum AdcP$__nesc_unnamed4360 {
#line 103
  AdcP$acquiredData = 18U
};
#line 103
typedef int AdcP$__nesc_sillytask_acquiredData[AdcP$acquiredData];
#line 57
enum AdcP$__nesc_unnamed4361 {
  AdcP$IDLE, 
  AdcP$ACQUIRE_DATA, 
  AdcP$ACQUIRE_DATA_NOW
};




 uint8_t AdcP$state;
 uint8_t AdcP$client;
 uint16_t AdcP$val;

static inline uint8_t AdcP$channel(void);



static inline uint8_t AdcP$refVoltage(void);



static inline uint8_t AdcP$prescaler(void);



static void AdcP$sample(void);



static inline error_t AdcP$startGet(uint8_t newState, uint8_t newClient);








static inline  error_t AdcP$Read$read(uint8_t c);







static inline  void AdcP$acquiredData$runTask(void);




static inline   void AdcP$Atm128AdcSingle$dataReady(uint16_t data, bool precise);
#line 137
static inline    uint8_t AdcP$Atm128AdcConfig$default$getChannel(uint8_t c);



static inline    uint8_t AdcP$Atm128AdcConfig$default$getRefVoltage(uint8_t c);



static inline    uint8_t AdcP$Atm128AdcConfig$default$getPrescaler(uint8_t c);




static inline    void AdcP$ReadNow$default$readDone(uint8_t c, error_t e, uint16_t d);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$readDone(
# 24 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7e3f83a8, 
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
error_t arg_0x7e753480, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t arg_0x7e753608);
#line 55
static  error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$read(
# 26 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7e3f6250);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$release(
# 27 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7e3f5010);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$request(
# 27 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7e3f5010);



static inline  error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$read(uint8_t client);



static inline  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(uint8_t client);



static inline  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data);




static inline    error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$request(uint8_t client);


static inline    error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(uint8_t client);
static inline   void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void PhotoP$PhotoPin$makeOutput(void);
#line 29
static   void PhotoP$PhotoPin$set(void);
static   void PhotoP$PhotoPin$clr(void);
# 31 "/opt/tinyos-2.x/tos/platforms/zigbex/ZigbexBusAdc.nc"
static   uint8_t PhotoP$PhotoAdc$getChannel(void);
# 41 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/PhotoP.nc"
static inline   uint8_t PhotoP$Atm128AdcConfig$getChannel(void);



static inline   uint8_t PhotoP$Atm128AdcConfig$getRefVoltage(void);



static inline   uint8_t PhotoP$Atm128AdcConfig$getPrescaler(void);



static inline   void PhotoP$ResourceConfigure$configure(void);






static inline   void PhotoP$ResourceConfigure$unconfigure(void);
# 41 "/opt/tinyos-2.x/tos/platforms/zigbex/ZigbexBusP.nc"
static inline   uint8_t ZigbexBusP$Adc0$getChannel(void);
static inline   uint8_t ZigbexBusP$Adc1$getChannel(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void /*InteractionC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$Read$readDone(error_t arg_0x7e753480, /*InteractionC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$Read$val_t arg_0x7e753608);
#line 55
static  error_t /*InteractionC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$subRead$read(void);
# 33 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/ADC_ShiftM.nc"
static inline  error_t /*InteractionC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$Read$read(void);



static inline  void /*InteractionC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$subRead$readDone(error_t result, uint16_t val);
# 31 "/opt/tinyos-2.x/tos/platforms/zigbex/ZigbexBusAdc.nc"
static   uint8_t UltraredP$UltraredAdc$getChannel(void);
# 40 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/UltraredP.nc"
static inline   uint8_t UltraredP$Atm128AdcConfig$getChannel(void);



static inline   uint8_t UltraredP$Atm128AdcConfig$getRefVoltage(void);



static inline   uint8_t UltraredP$Atm128AdcConfig$getPrescaler(void);



static inline   void UltraredP$ResourceConfigure$configure(void);


static inline   void UltraredP$ResourceConfigure$unconfigure(void);
# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   error_t CommunicationWithOPTM$HPLUART$enableRxIntr(void);
#line 40
static   error_t CommunicationWithOPTM$HPLUART$enableTxIntr(void);





static   void CommunicationWithOPTM$HPLUART$tx(uint8_t arg_0x7e38fbc8);
# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t CommunicationWithOPTM$HplUartTxControl$start(void);
# 29 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/CommunicationWithOPT.nc"
static   void CommunicationWithOPTM$CommunicationWithOPT$parsing_config(uint8_t *arg_0x7e743840);

static   void CommunicationWithOPTM$CommunicationWithOPT$parsing_control(uint8_t *arg_0x7e7421f0);
static   void CommunicationWithOPTM$CommunicationWithOPT$parsing_longDT(uint8_t *arg_0x7e7426b8);
#line 30
static   void CommunicationWithOPTM$CommunicationWithOPT$parsing_sensor(uint8_t *arg_0x7e743d08);
# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t CommunicationWithOPTM$HplUartRxControl$start(void);
# 41 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/CommunicationWithOPTM.nc"
 bool CommunicationWithOPTM$state = 0;
 uint8_t CommunicationWithOPTM$str_buff[96];
 uint16_t CommunicationWithOPTM$buff_start = 0;
 uint16_t CommunicationWithOPTM$buff_end = 0;

 uint8_t CommunicationWithOPTM$CSST_Size;
#line 46
 uint8_t CommunicationWithOPTM$LDST_Size;
#line 46
 uint8_t CommunicationWithOPTM$Uart_R_buff[96];
#line 46
 uint8_t CommunicationWithOPTM$R_index = 0;
#line 46
 uint8_t CommunicationWithOPTM$RecvStartFlag = 0;
 configuration_sampling_struct_t CommunicationWithOPTM$CSST;
 longData_struct_t CommunicationWithOPTM$LDST;

static void CommunicationWithOPTM$UARTSend(uint8_t *data, uint8_t len);



static inline  void CommunicationWithOPTM$CommunicationWithOPT$start(void);
#line 70
static inline  void CommunicationWithOPTM$CommunicationWithOPT$SendConfigureMSG(void);
#line 97
static  void CommunicationWithOPTM$CommunicationWithOPT$SendControlMSG(uint8_t OptType, uint8_t Cmd1, uint8_t Cmd2, uint8_t *SetDataBuff);
#line 115
static  void CommunicationWithOPTM$CommunicationWithOPT$RequestSensorMSG(uint8_t OptType);
#line 128
static inline  void CommunicationWithOPTM$CommunicationWithOPT$RequestLongMSG(uint8_t OptType, uint8_t Seq);
#line 144
static inline  void CommunicationWithOPTM$CommunicationWithOPT$SpecialControlMSG(uint8_t TXpacketType, uint8_t OptType, uint8_t Cmd1, uint8_t Cmd2, uint8_t *SetDataBuff, uint8_t RXpacketType);
#line 163
static inline   void CommunicationWithOPTM$HPLUART$rxDone(uint8_t data);
#line 262
static void CommunicationWithOPTM$UARTSend(uint8_t *data, uint8_t len);
#line 281
static inline   void CommunicationWithOPTM$HPLUART$txDone(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   void HplAtm128UartP$HplUart0$rxDone(uint8_t arg_0x7e38d6b0);
#line 47
static   void HplAtm128UartP$HplUart0$txDone(void);

static   void HplAtm128UartP$HplUart1$rxDone(uint8_t arg_0x7e38d6b0);
#line 47
static   void HplAtm128UartP$HplUart1$txDone(void);
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static   uint16_t HplAtm128UartP$Atm128Calibrate$baudrateRegister(uint32_t arg_0x7eed2520);
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void HplAtm128UartP$McuPowerState$update(void);
# 87 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline  error_t HplAtm128UartP$Uart0Init$init(void);
#line 107
static inline  error_t HplAtm128UartP$Uart0TxControl$start(void);
#line 121
static inline  error_t HplAtm128UartP$Uart0RxControl$start(void);
#line 135
static inline   error_t HplAtm128UartP$HplUart0$enableTxIntr(void);









static inline   error_t HplAtm128UartP$HplUart0$enableRxIntr(void);
#line 167
static   void HplAtm128UartP$HplUart0$tx(uint8_t data);






void __vector_18(void) __attribute((signal))   ;





void __vector_20(void) __attribute((interrupt))   ;



static inline  error_t HplAtm128UartP$Uart1Init$init(void);
#line 204
static inline  error_t HplAtm128UartP$Uart1TxControl$start(void);
#line 218
static inline  error_t HplAtm128UartP$Uart1RxControl$start(void);
#line 232
static inline   error_t HplAtm128UartP$HplUart1$enableTxIntr(void);









static inline   error_t HplAtm128UartP$HplUart1$enableRxIntr(void);
#line 264
static   void HplAtm128UartP$HplUart1$tx(uint8_t data);






void __vector_30(void) __attribute((signal))   ;




void __vector_32(void) __attribute((interrupt))   ;
# 16 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/NoSCSuartDBGC.nc"
static inline   void NoSCSuartDBGC$SCSuartDBG$UARTSend(uint8_t *data, uint8_t len);
# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t SCSuartDBGM$HplUartRxControl$start(void);
# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   error_t SCSuartDBGM$HPLUART$enableRxIntr(void);
#line 40
static   error_t SCSuartDBGM$HPLUART$enableTxIntr(void);





static   void SCSuartDBGM$HPLUART$tx(uint8_t arg_0x7e38fbc8);
# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t SCSuartDBGM$HplUartTxControl$start(void);
# 30 "/opt/tinyos-2.x/tos/platforms/zigbex/SCSuartDBGRecv.nc"
static   void SCSuartDBGM$SCSuartDBGRecv$UARTRecv(uint8_t arg_0x7e2e28f8);
# 46 "/opt/tinyos-2.x/tos/platforms/zigbex/SCSuartDBGM.nc"
 bool SCSuartDBGM$state = 0;
 uint8_t SCSuartDBGM$str_buff[127];
 uint16_t SCSuartDBGM$buff_start = 0;
 uint16_t SCSuartDBGM$buff_end = 0;

static inline  error_t SCSuartDBGM$StdControl$start(void);
#line 68
static inline   void SCSuartDBGM$HPLUART$rxDone(uint8_t data);



static inline   void SCSuartDBGM$HPLUART$txDone(void);
#line 90
static   void SCSuartDBGM$SCSuartDBG$UARTSend(uint8_t *data, uint8_t len);
#line 112
static inline    void SCSuartDBGM$SCSuartDBGRecv$default$UARTRecv(uint8_t recv_Char);
# 3 "TempSensor.nc"
static  void TempSensorM$TempSensor$done(uint16_t arg_0x7ef41a88, uint16_t arg_0x7ef41c18);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t TempSensorM$Read_Humidity$read(void);
#line 55
static  error_t TempSensorM$Read_Temp$read(void);
# 35 "TempSensorM.nc"
static inline void TempSensorM$calc_SHT11(uint16_t p_humidity, uint16_t p_temperature);

uint16_t TempSensorM$myhumi;
#line 37
uint16_t TempSensorM$mytemp;
uint16_t TempSensorM$T_temp;
#line 38
uint16_t TempSensorM$T_humi;







static  void TempSensorM$Read_Temp$readDone(error_t result, uint16_t data);
#line 58
static  void TempSensorM$Read_Humidity$readDone(error_t result, uint16_t data);
#line 71
static inline void TempSensorM$calc_SHT11(uint16_t p_humidity, uint16_t p_temperature);
# 76 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
static  error_t /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$measureHumidity(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Humidity$readDone(error_t arg_0x7e753480, /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Humidity$val_t arg_0x7e753608);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$TempResource$release(void);
#line 78
static   error_t /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$TempResource$request(void);
# 61 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
static  error_t /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$measureTemperature(void);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$HumResource$release(void);
#line 78
static   error_t /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$HumResource$request(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Temperature$readDone(error_t arg_0x7e753480, /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Temperature$val_t arg_0x7e753608);
# 53 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  error_t /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Temperature$read(void);




static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$TempResource$granted(void);







static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$measureTemperatureDone(error_t result, uint16_t val);




static inline  error_t /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Humidity$read(void);




static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$HumResource$granted(void);







static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$measureHumidityDone(error_t result, uint16_t val);




static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$resetDone(error_t result);
static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$measureHumidityDone(error_t result, uint16_t val);
static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$readStatusRegDone(error_t result, uint8_t val);
static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$writeStatusRegDone(error_t result);

static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$resetDone(error_t result);
static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$measureTemperatureDone(error_t result, uint16_t val);
static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$readStatusRegDone(error_t result, uint8_t val);
static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$writeStatusRegDone(error_t result);
# 82 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_disable_interrupt(void)
#line 82
{
   __asm volatile ("cli");}

#line 99
 
#line 98
__inline __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 102
  __nesc_disable_interrupt();
  return result;
}



 
#line 107
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 113 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline  void SchedulerBasicP$Scheduler$init(void)
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP$m_next, SchedulerBasicP$NO_TASK, sizeof SchedulerBasicP$m_next);
    SchedulerBasicP$m_head = SchedulerBasicP$NO_TASK;
    SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
  }
}

# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static  void RealMainP$Scheduler$init(void){
#line 46
  SchedulerBasicP$Scheduler$init();
#line 46
}
#line 46
# 42 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)(0x35 + 0x20) = 1 << 5;
  }
}

# 48 "/opt/tinyos-2.x/tos/types/TinyError.h"
static inline error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline  error_t HplAtm128Timer0AsyncC$Init$init(void)
#line 49
{
  * (volatile uint8_t *)(0x30 + 0x20) |= 1 << 3;
  return SUCCESS;
}

# 52 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP$Adcsra2int(Atm128Adcsra_t x)
#line 52
{
#line 52
  union __nesc_unnamed4362 {
#line 52
    Atm128Adcsra_t f;
#line 52
    uint8_t t;
  } 
#line 52
  c = { .f = x };

#line 52
  return c.t;
}




static inline   void HplAtm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t x)
#line 58
{
  * (volatile uint8_t *)(0x06 + 0x20) = HplAtm128AdcP$Adcsra2int(x);
}

# 60 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static   void Atm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t arg_0x7e4916f8){
#line 60
  HplAtm128AdcP$HplAtm128Adc$setAdcsra(arg_0x7e4916f8);
#line 60
}
#line 60
# 84 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline  error_t Atm128AdcP$Init$init(void)
#line 84
{
  /* atomic removed: atomic calls only */
  {
    Atm128Adcsra_t adcsr;

    adcsr.aden = ATM128_ADC_ENABLE_OFF;
    adcsr.adsc = ATM128_ADC_START_CONVERSION_OFF;
    adcsr.adfr = ATM128_ADC_FREE_RUNNING_OFF;
    adcsr.adif = ATM128_ADC_INT_FLAG_OFF;
    adcsr.adie = ATM128_ADC_INT_ENABLE_OFF;
    adcsr.adps = ATM128_ADC_PRESCALE_2;
    Atm128AdcP$HplAtm128Adc$setAdcsra(adcsr);
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t MotePlatformP$SubInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = Atm128AdcP$Init$init();
#line 51
  result = ecombine(result, HplAtm128Timer0AsyncC$Init$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)59U &= ~(1 << 4);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void MotePlatformP$SerialIdPin$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr();
#line 30
}
#line 30
# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)58U &= ~(1 << 4);
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void MotePlatformP$SerialIdPin$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput();
#line 33
}
#line 33
# 26 "/opt/tinyos-2.x/tos/platforms/zigbex/MotePlatformP.nc"
static inline  error_t MotePlatformP$PlatformInit$init(void)
#line 26
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;


  MotePlatformP$SerialIdPin$makeInput();
  MotePlatformP$SerialIdPin$clr();

  return MotePlatformP$SubInit$init();
}

# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 0;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led2$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 1;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led1$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 2;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led0$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 0;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led2$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 1;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led1$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 2;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led0$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput();
#line 35
}
#line 35
# 45 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline  error_t LedsP$Init$init(void)
#line 45
{
  /* atomic removed: atomic calls only */
#line 46
  {
    ;
    LedsP$Led0$makeOutput();
    LedsP$Led1$makeOutput();
    LedsP$Led2$makeOutput();
    LedsP$Led0$set();
    LedsP$Led1$set();
    LedsP$Led2$set();
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t PlatformP$MoteInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = LedsP$Init$init();
#line 51
  result = ecombine(result, MotePlatformP$PlatformInit$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 41 "/opt/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
static inline  error_t MeasureClockC$Init$init(void)
#line 41
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 47
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)(0x2E + 0x20) = 1 << 0;
    * (volatile uint8_t *)(0x30 + 0x20) = 1 << 3;
    * (volatile uint8_t *)(0x33 + 0x20) = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)(0x2C + 0x20);
    for (wraps = MeasureClockC$MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)(0x2C + 0x20);

        if (next < start) {
          wraps--;
          }
#line 65
        start = next;
      }


    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;


    start = * (volatile uint16_t *)(0x2C + 0x20);
    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;
    MeasureClockC$cycles = * (volatile uint16_t *)(0x2C + 0x20);

    MeasureClockC$cycles = (MeasureClockC$cycles - start + 16) >> 5;


    * (volatile uint8_t *)(0x30 + 0x20) = * (volatile uint8_t *)(0x2E + 0x20) = * (volatile uint8_t *)(0x33 + 0x20) = 0;
    * (volatile uint8_t *)(0x32 + 0x20) = 0;
    * (volatile uint16_t *)(0x2C + 0x20) = 0;
    * (volatile uint8_t *)0x7C = * (volatile uint8_t *)(0x36 + 0x20) = 0xff;
    while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t PlatformP$MeasureClock$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = MeasureClockC$Init$init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 49 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline  error_t PlatformP$Init$init(void)
{
  error_t ok;


  ok = PlatformP$MeasureClock$init();
  ok = ecombine(ok, PlatformP$MoteInit$init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP$power_init();

  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t RealMainP$PlatformInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = PlatformP$Init$init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 54 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static  bool RealMainP$Scheduler$runNextTask(void){
#line 54
  unsigned char result;
#line 54

#line 54
  result = SchedulerBasicP$Scheduler$runNextTask();
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 44 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline    error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$request(uint8_t client)
#line 44
{
  return FAIL;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$request(uint8_t arg_0x7e3f5010){
#line 78
  unsigned char result;
#line 78

#line 78
  switch (arg_0x7e3f5010) {
#line 78
    case /*InteractionC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID:
#line 78
      result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$request(/*InteractionC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$HAL_ID);
#line 78
      break;
#line 78
    case /*InteractionC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$ID:
#line 78
      result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$request(/*InteractionC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$HAL_ID);
#line 78
      break;
#line 78
    default:
#line 78
      result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$request(arg_0x7e3f5010);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 31 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline  error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$read(uint8_t client)
#line 31
{
  return /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$request(client);
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  error_t /*InteractionC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$subRead$read(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$read(/*InteractionC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$ID);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 33 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/ADC_ShiftM.nc"
static inline  error_t /*InteractionC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$Read$read(void)
#line 33
{
  return /*InteractionC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$subRead$read();
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  error_t InteractionM$Read_Ultrared$read(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = /*InteractionC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$Read$read();
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 369 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
static inline  void InteractionM$Read_Photo$readDone(error_t err, uint16_t val)
#line 369
{
  if (err == SUCCESS) {
    InteractionM$MyPhoto = val;
    }
#line 372
  InteractionM$Read_Ultrared$read();
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  void /*InteractionC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$readDone(error_t arg_0x7e753480, /*InteractionC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$val_t arg_0x7e753608){
#line 63
  InteractionM$Read_Photo$readDone(arg_0x7e753480, arg_0x7e753608);
#line 63
}
#line 63
# 37 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/ADC_ShiftM.nc"
static inline  void /*InteractionC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$readDone(error_t result, uint16_t val)
#line 37
{
  /*InteractionC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$readDone(result, val >> 6);
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t InteractionM$SendBasicSensor$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(InteractionM$SendBasicSensor);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 375 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
static inline  void InteractionM$Read_Ultrared$readDone(error_t err, uint16_t val)
#line 375
{
  if (err == SUCCESS) {
    InteractionM$MyUltrared = val;
    }
#line 378
  InteractionM$SendBasicSensor$postTask();
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  void /*InteractionC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$Read$readDone(error_t arg_0x7e753480, /*InteractionC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$Read$val_t arg_0x7e753608){
#line 63
  InteractionM$Read_Ultrared$readDone(arg_0x7e753480, arg_0x7e753608);
#line 63
}
#line 63
# 37 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/ADC_ShiftM.nc"
static inline  void /*InteractionC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$subRead$readDone(error_t result, uint16_t val)
#line 37
{
  /*InteractionC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$Read$readDone(result, val >> 6);
}

# 48 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline   void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data)
#line 48
{
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$readDone(uint8_t arg_0x7e3f83a8, error_t arg_0x7e753480, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t arg_0x7e753608){
#line 63
  switch (arg_0x7e3f83a8) {
#line 63
    case /*InteractionC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID:
#line 63
      /*InteractionC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$readDone(arg_0x7e753480, arg_0x7e753608);
#line 63
      break;
#line 63
    case /*InteractionC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$ID:
#line 63
      /*InteractionC.UltraredSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$1$subRead$readDone(arg_0x7e753480, arg_0x7e753608);
#line 63
      break;
#line 63
    default:
#line 63
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(arg_0x7e3f83a8, arg_0x7e753480, arg_0x7e753608);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
# 47 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline    error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(uint8_t client)
#line 47
{
#line 47
  return FAIL;
}

# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$release(uint8_t arg_0x7e3f5010){
#line 101
  unsigned char result;
#line 101

#line 101
  switch (arg_0x7e3f5010) {
#line 101
    case /*InteractionC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID:
#line 101
      result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$release(/*InteractionC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$HAL_ID);
#line 101
      break;
#line 101
    case /*InteractionC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$ID:
#line 101
      result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$release(/*InteractionC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$HAL_ID);
#line 101
      break;
#line 101
    default:
#line 101
      result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(arg_0x7e3f5010);
#line 101
      break;
#line 101
    }
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 39 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data)
#line 39
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$release(client);
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$readDone(client, result, data);
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  void AdcP$Read$readDone(uint8_t arg_0x7e412610, error_t arg_0x7e753480, AdcP$Read$val_t arg_0x7e753608){
#line 63
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(arg_0x7e412610, arg_0x7e753480, arg_0x7e753608);
#line 63
}
#line 63
# 103 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline  void AdcP$acquiredData$runTask(void)
#line 103
{
  AdcP$state = AdcP$IDLE;
  AdcP$Read$readDone(AdcP$client, SUCCESS, AdcP$val);
}

# 53 "/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline   bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty(void)
#line 53
{
  int i;

  /* atomic removed: atomic calls only */
#line 55
  {
    for (i = 0; i < sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ; i++) 
      if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 57
          FALSE;

#line 57
          return __nesc_temp;
        }
#line 58
    {
      unsigned char __nesc_temp = 
#line 58
      TRUE;

#line 58
      return __nesc_temp;
    }
  }
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Queue$isEmpty(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 44 "/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$clearEntry(uint8_t id)
#line 44
{
  /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[id / 8] &= ~(1 << id % 8);
}

#line 66
static inline   resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue(void)
#line 66
{
  int i;

  /* atomic removed: atomic calls only */
#line 68
  {
    for (i = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$last + 1; ; i++) {
        if (i == 2U) {
          i = 0;
          }
#line 72
        if (/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(i)) {
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$clearEntry(i);
            /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$last = i;
            {
              unsigned char __nesc_temp = 
#line 75
              i;

#line 75
              return __nesc_temp;
            }
          }
#line 77
        if (i == /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$last) {
          break;
          }
      }
#line 80
    {
      unsigned char __nesc_temp = 
#line 80
      /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$NO_ENTRY;

#line 80
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Queue$dequeue(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 86 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP$isWaiting(uint8_t id)
{
  return SchedulerBasicP$m_next[id] != SchedulerBasicP$NO_TASK || SchedulerBasicP$m_tail == id;
}

static inline bool SchedulerBasicP$pushTask(uint8_t id)
{
  if (!SchedulerBasicP$isWaiting(id)) 
    {
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_head = id;
          SchedulerBasicP$m_tail = id;
        }
      else 
        {
          SchedulerBasicP$m_next[SchedulerBasicP$m_tail] = id;
          SchedulerBasicP$m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 123 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline   void McuSleepC$McuPowerState$update(void)
#line 123
{
}

# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static   void HplAtm128AdcP$McuPowerState$update(void){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 75 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline   void HplAtm128AdcP$HplAtm128Adc$disableAdc(void)
#line 75
{
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 7);
  HplAtm128AdcP$McuPowerState$update();
}

# 77 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static   void Atm128AdcP$HplAtm128Adc$disableAdc(void){
#line 77
  HplAtm128AdcP$HplAtm128Adc$disableAdc();
#line 77
}
#line 77
# 109 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline   error_t Atm128AdcP$AsyncStdControl$stop(void)
#line 109
{
  /* atomic removed: atomic calls only */
#line 110
  Atm128AdcP$HplAtm128Adc$disableAdc();

  return SUCCESS;
}

# 82 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
inline static   error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$stop(void){
#line 82
  unsigned char result;
#line 82

#line 82
  result = Atm128AdcP$AsyncStdControl$stop();
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 74 "/opt/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline    void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void)
#line 74
{
}

# 52 "/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
inline static   void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$cleanup(void){
#line 52
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup();
#line 52
}
#line 52
# 69 "/opt/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline   void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$granted(void)
#line 69
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$cleanup();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$stop();
}

# 46 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
inline static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceController$granted(void){
#line 46
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$granted();
#line 46
}
#line 46
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP$14$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)56U &= ~(1 << 6);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void PhotoP$PhotoPin$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP$14$IO$clr();
#line 30
}
#line 30
# 60 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/PhotoP.nc"
static inline   void PhotoP$ResourceConfigure$unconfigure(void)
#line 60
{
  PhotoP$PhotoPin$clr();
}

# 55 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/UltraredP.nc"
static inline   void UltraredP$ResourceConfigure$unconfigure(void)
#line 55
{
}

# 200 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$default$unconfigure(uint8_t id)
#line 200
{
}

# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$unconfigure(uint8_t arg_0x7e542910){
#line 55
  switch (arg_0x7e542910) {
#line 55
    case /*InteractionC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$HAL_ID:
#line 55
      PhotoP$ResourceConfigure$unconfigure();
#line 55
      break;
#line 55
    case /*InteractionC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$HAL_ID:
#line 55
      UltraredP$ResourceConfigure$unconfigure();
#line 55
      break;
#line 55
    default:
#line 55
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$default$unconfigure(arg_0x7e542910);
#line 55
      break;
#line 55
    }
#line 55
}
#line 55
# 186 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceRequested$default$requested(uint8_t id)
#line 186
{
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceRequested$requested(uint8_t arg_0x7e5436c8){
#line 43
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceRequested$default$requested(arg_0x7e5436c8);
#line 43
}
#line 43
# 84 "/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline   error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(resource_client_id_t id)
#line 84
{
  /* atomic removed: atomic calls only */
#line 85
  {
    if (!/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(id)) {
        /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 88
          SUCCESS;

#line 88
          return __nesc_temp;
        }
      }
#line 90
    {
      unsigned char __nesc_temp = 
#line 90
      EBUSY;

#line 90
      return __nesc_temp;
    }
  }
}

# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Queue$enqueue(resource_client_id_t arg_0x7e552010){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(arg_0x7e552010);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 125 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceController$release(void)
#line 125
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 126
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$resId == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$CONTROLLER_ID) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$RES_GRANTING) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask$postTask();
              {
                unsigned char __nesc_temp = 
#line 130
                SUCCESS;

                {
#line 130
                  __nesc_atomic_end(__nesc_atomic); 
#line 130
                  return __nesc_temp;
                }
              }
            }
          else {
#line 132
            if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$RES_IMM_GRANTING) {
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$reqResId;
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 135
                  SUCCESS;

                  {
#line 135
                    __nesc_atomic_end(__nesc_atomic); 
#line 135
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
#line 139
  return FAIL;
}

# 56 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
inline static   error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$release(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceController$release();
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 71 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline   void HplAtm128AdcP$HplAtm128Adc$enableAdc(void)
#line 71
{
  * (volatile uint8_t *)(0x06 + 0x20) |= 1 << 7;
  HplAtm128AdcP$McuPowerState$update();
}

# 73 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static   void Atm128AdcP$HplAtm128Adc$enableAdc(void){
#line 73
  HplAtm128AdcP$HplAtm128Adc$enableAdc();
#line 73
}
#line 73
# 104 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline   error_t Atm128AdcP$AsyncStdControl$start(void)
#line 104
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 105
    Atm128AdcP$HplAtm128Adc$enableAdc();
#line 105
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 73 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
inline static   error_t /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$start(void){
#line 73
  unsigned char result;
#line 73

#line 73
  result = Atm128AdcP$AsyncStdControl$start();
#line 73

#line 73
  return result;
#line 73
}
#line 73
# 59 "/opt/tinyos-2.x/tos/lib/power/AsyncPowerManagerP.nc"
static inline   void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$requested(void)
#line 59
{
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$AsyncStdControl$start();
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$release();
}

# 73 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
inline static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceController$requested(void){
#line 73
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$requested();
#line 73
}
#line 73
# 86 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline error_t AdcP$startGet(uint8_t newState, uint8_t newClient)
#line 86
{

  AdcP$state = newState;
  AdcP$client = newClient;
  AdcP$sample();

  return SUCCESS;
}

static inline  error_t AdcP$Read$read(uint8_t c)
#line 95
{
  return AdcP$startGet(AdcP$ACQUIRE_DATA, c);
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$read(uint8_t arg_0x7e3f6250){
#line 55
  unsigned char result;
#line 55

#line 55
  result = AdcP$Read$read(arg_0x7e3f6250);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 35 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(uint8_t client)
#line 35
{
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$read(client);
}

# 184 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$default$granted(uint8_t id)
#line 184
{
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$granted(uint8_t arg_0x7e544d40){
#line 92
  switch (arg_0x7e544d40) {
#line 92
    case /*InteractionC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$HAL_ID:
#line 92
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(/*InteractionC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID);
#line 92
      break;
#line 92
    case /*InteractionC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$HAL_ID:
#line 92
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(/*InteractionC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$ID);
#line 92
      break;
#line 92
    default:
#line 92
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$default$granted(arg_0x7e544d40);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP$14$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)56U |= 1 << 6;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void PhotoP$PhotoPin$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP$14$IO$set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP$14$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)55U |= 1 << 6;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void PhotoP$PhotoPin$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP$14$IO$makeOutput();
#line 35
}
#line 35
# 53 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/PhotoP.nc"
static inline   void PhotoP$ResourceConfigure$configure(void)
#line 53
{
  PhotoP$PhotoPin$makeOutput();
  PhotoP$PhotoPin$set();
}

# 52 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/UltraredP.nc"
static inline   void UltraredP$ResourceConfigure$configure(void)
#line 52
{
}

# 198 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$default$configure(uint8_t id)
#line 198
{
}

# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$configure(uint8_t arg_0x7e542910){
#line 49
  switch (arg_0x7e542910) {
#line 49
    case /*InteractionC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$HAL_ID:
#line 49
      PhotoP$ResourceConfigure$configure();
#line 49
      break;
#line 49
    case /*InteractionC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$HAL_ID:
#line 49
      UltraredP$ResourceConfigure$configure();
#line 49
      break;
#line 49
    default:
#line 49
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$default$configure(arg_0x7e542910);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 172 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline  void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask$runTask(void)
#line 172
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 173
    {
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$reqResId;
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$RES_BUSY;
    }
#line 176
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$configure(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$resId);
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$granted(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$resId);
}

# 103 "/opt/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
static inline   uint8_t MeasureClockC$Atm128Calibrate$adcPrescaler(void)
#line 103
{

  if (MeasureClockC$cycles >= 390) {
    return ATM128_ADC_PRESCALE_128;
    }
#line 107
  if (MeasureClockC$cycles >= 195) {
    return ATM128_ADC_PRESCALE_64;
    }
#line 109
  if (MeasureClockC$cycles >= 97) {
    return ATM128_ADC_PRESCALE_32;
    }
#line 111
  if (MeasureClockC$cycles >= 48) {
    return ATM128_ADC_PRESCALE_16;
    }
#line 113
  if (MeasureClockC$cycles >= 24) {
    return ATM128_ADC_PRESCALE_8;
    }
#line 115
  if (MeasureClockC$cycles >= 12) {
    return ATM128_ADC_PRESCALE_4;
    }
#line 117
  return ATM128_ADC_PRESCALE_2;
}

# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static   uint8_t Atm128AdcP$Atm128Calibrate$adcPrescaler(void){
#line 53
  unsigned char result;
#line 53

#line 53
  result = MeasureClockC$Atm128Calibrate$adcPrescaler();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 51 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline uint8_t HplAtm128AdcP$Admux2int(Atm128Admux_t x)
#line 51
{
#line 51
  union __nesc_unnamed4363 {
#line 51
    Atm128Admux_t f;
#line 51
    uint8_t t;
  } 
#line 51
  c = { .f = x };

#line 51
  return c.t;
}


static inline   void HplAtm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t x)
#line 55
{
  * (volatile uint8_t *)(0x07 + 0x20) = HplAtm128AdcP$Admux2int(x);
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static   void Atm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t arg_0x7e493da8){
#line 49
  HplAtm128AdcP$HplAtm128Adc$setAdmux(arg_0x7e493da8);
#line 49
}
#line 49
# 119 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
static __inline bool Atm128AdcP$isPrecise(Atm128Admux_t admux, uint8_t channel, uint8_t refVoltage)
#line 119
{
  return refVoltage == admux.refs && ((
  channel <= ATM128_ADC_SNGL_ADC7 || channel >= ATM128_ADC_SNGL_1_23) || channel == admux.mux);
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline   Atm128Admux_t HplAtm128AdcP$HplAtm128Adc$getAdmux(void)
#line 41
{
  return * (Atm128Admux_t *)& * (volatile uint8_t *)(0x07 + 0x20);
}

# 44 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static   Atm128Admux_t Atm128AdcP$HplAtm128Adc$getAdmux(void){
#line 44
  struct __nesc_unnamed4250 result;
#line 44

#line 44
  result = HplAtm128AdcP$HplAtm128Adc$getAdmux();
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 184 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline void Atm128AdcP$getData(uint8_t channel, uint8_t refVoltage, bool leftJustify, uint8_t prescaler)
#line 184
{
  Atm128Admux_t admux;
  Atm128Adcsra_t adcsr;

  admux = Atm128AdcP$HplAtm128Adc$getAdmux();
  Atm128AdcP$f.precise = Atm128AdcP$isPrecise(admux, channel, refVoltage);
  Atm128AdcP$f.channel = channel;

  admux.refs = refVoltage;
  admux.adlar = leftJustify;
  admux.mux = channel;
  Atm128AdcP$HplAtm128Adc$setAdmux(admux);

  adcsr.aden = ATM128_ADC_ENABLE_ON;
  adcsr.adsc = ATM128_ADC_START_CONVERSION_ON;
  adcsr.adfr = Atm128AdcP$f.multiple;
  adcsr.adif = ATM128_ADC_INT_FLAG_ON;
  adcsr.adie = ATM128_ADC_INT_ENABLE_ON;
  if (prescaler == ATM128_ADC_PRESCALE) {
    prescaler = Atm128AdcP$Atm128Calibrate$adcPrescaler();
    }
#line 204
  adcsr.adps = prescaler;
  Atm128AdcP$HplAtm128Adc$setAdcsra(adcsr);
}

static inline   bool Atm128AdcP$Atm128AdcSingle$getData(uint8_t channel, uint8_t refVoltage, 
bool leftJustify, uint8_t prescaler)
#line 209
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      Atm128AdcP$f.multiple = FALSE;
      Atm128AdcP$getData(channel, refVoltage, leftJustify, prescaler);

      {
        unsigned char __nesc_temp = 
#line 215
        Atm128AdcP$f.precise;

        {
#line 215
          __nesc_atomic_end(__nesc_atomic); 
#line 215
          return __nesc_temp;
        }
      }
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static   bool AdcP$Atm128AdcSingle$getData(uint8_t arg_0x7e4a8868, uint8_t arg_0x7e4a89f8, bool arg_0x7e4a8b98, uint8_t arg_0x7e4a8d28){
#line 61
  unsigned char result;
#line 61

#line 61
  result = Atm128AdcP$Atm128AdcSingle$getData(arg_0x7e4a8868, arg_0x7e4a89f8, arg_0x7e4a8b98, arg_0x7e4a8d28);
#line 61

#line 61
  return result;
#line 61
}
#line 61
# 41 "/opt/tinyos-2.x/tos/platforms/zigbex/ZigbexBusP.nc"
static inline   uint8_t ZigbexBusP$Adc0$getChannel(void)
#line 41
{
#line 41
  return 0;
}

# 31 "/opt/tinyos-2.x/tos/platforms/zigbex/ZigbexBusAdc.nc"
inline static   uint8_t PhotoP$PhotoAdc$getChannel(void){
#line 31
  unsigned char result;
#line 31

#line 31
  result = ZigbexBusP$Adc0$getChannel();
#line 31

#line 31
  return result;
#line 31
}
#line 31
# 41 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/PhotoP.nc"
static inline   uint8_t PhotoP$Atm128AdcConfig$getChannel(void)
#line 41
{
  return PhotoP$PhotoAdc$getChannel();
}

# 42 "/opt/tinyos-2.x/tos/platforms/zigbex/ZigbexBusP.nc"
static inline   uint8_t ZigbexBusP$Adc1$getChannel(void)
#line 42
{
#line 42
  return 1;
}

# 31 "/opt/tinyos-2.x/tos/platforms/zigbex/ZigbexBusAdc.nc"
inline static   uint8_t UltraredP$UltraredAdc$getChannel(void){
#line 31
  unsigned char result;
#line 31

#line 31
  result = ZigbexBusP$Adc1$getChannel();
#line 31

#line 31
  return result;
#line 31
}
#line 31
# 40 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/UltraredP.nc"
static inline   uint8_t UltraredP$Atm128AdcConfig$getChannel(void)
#line 40
{
  return UltraredP$UltraredAdc$getChannel();
}

# 137 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline    uint8_t AdcP$Atm128AdcConfig$default$getChannel(uint8_t c)
#line 137
{
  return ATM128_ADC_SNGL_GND;
}

# 25 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static   uint8_t AdcP$Atm128AdcConfig$getChannel(uint8_t arg_0x7e40e748){
#line 25
  unsigned char result;
#line 25

#line 25
  switch (arg_0x7e40e748) {
#line 25
    case /*InteractionC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID:
#line 25
      result = PhotoP$Atm128AdcConfig$getChannel();
#line 25
      break;
#line 25
    case /*InteractionC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$ID:
#line 25
      result = UltraredP$Atm128AdcConfig$getChannel();
#line 25
      break;
#line 25
    default:
#line 25
      result = AdcP$Atm128AdcConfig$default$getChannel(arg_0x7e40e748);
#line 25
      break;
#line 25
    }
#line 25

#line 25
  return result;
#line 25
}
#line 25
# 70 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$channel(void)
#line 70
{
  return AdcP$Atm128AdcConfig$getChannel(AdcP$client);
}

# 45 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/PhotoP.nc"
static inline   uint8_t PhotoP$Atm128AdcConfig$getRefVoltage(void)
#line 45
{
  return ATM128_ADC_VREF_OFF;
}

# 44 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/UltraredP.nc"
static inline   uint8_t UltraredP$Atm128AdcConfig$getRefVoltage(void)
#line 44
{
  return ATM128_ADC_VREF_OFF;
}

# 141 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline    uint8_t AdcP$Atm128AdcConfig$default$getRefVoltage(uint8_t c)
#line 141
{
  return ATM128_ADC_VREF_OFF;
}

# 32 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static   uint8_t AdcP$Atm128AdcConfig$getRefVoltage(uint8_t arg_0x7e40e748){
#line 32
  unsigned char result;
#line 32

#line 32
  switch (arg_0x7e40e748) {
#line 32
    case /*InteractionC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID:
#line 32
      result = PhotoP$Atm128AdcConfig$getRefVoltage();
#line 32
      break;
#line 32
    case /*InteractionC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$ID:
#line 32
      result = UltraredP$Atm128AdcConfig$getRefVoltage();
#line 32
      break;
#line 32
    default:
#line 32
      result = AdcP$Atm128AdcConfig$default$getRefVoltage(arg_0x7e40e748);
#line 32
      break;
#line 32
    }
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 74 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$refVoltage(void)
#line 74
{
  return AdcP$Atm128AdcConfig$getRefVoltage(AdcP$client);
}

# 49 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/PhotoP.nc"
static inline   uint8_t PhotoP$Atm128AdcConfig$getPrescaler(void)
#line 49
{
  return ATM128_ADC_PRESCALE;
}

# 48 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/UltraredP.nc"
static inline   uint8_t UltraredP$Atm128AdcConfig$getPrescaler(void)
#line 48
{
  return ATM128_ADC_PRESCALE;
}

# 145 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline    uint8_t AdcP$Atm128AdcConfig$default$getPrescaler(uint8_t c)
#line 145
{
  return ATM128_ADC_PRESCALE_2;
}

# 39 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static   uint8_t AdcP$Atm128AdcConfig$getPrescaler(uint8_t arg_0x7e40e748){
#line 39
  unsigned char result;
#line 39

#line 39
  switch (arg_0x7e40e748) {
#line 39
    case /*InteractionC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID:
#line 39
      result = PhotoP$Atm128AdcConfig$getPrescaler();
#line 39
      break;
#line 39
    case /*InteractionC.UltraredSensorC.DemoChannel.UltraredProC.AdcReadClientC*/AdcReadClientC$1$ID:
#line 39
      result = UltraredP$Atm128AdcConfig$getPrescaler();
#line 39
      break;
#line 39
    default:
#line 39
      result = AdcP$Atm128AdcConfig$default$getPrescaler(arg_0x7e40e748);
#line 39
      break;
#line 39
    }
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 78 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline uint8_t AdcP$prescaler(void)
#line 78
{
  return AdcP$Atm128AdcConfig$getPrescaler(AdcP$client);
}

# 158 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmCounterC.nc"
static inline   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$getNow(void)
{
  return /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$get();
}

# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void){
#line 98
  unsigned long result;
#line 98

#line 98
  result = /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$getNow();
#line 98

#line 98
  return result;
#line 98
}
#line 98
# 85 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void)
{
#line 86
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow();
}

# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void){
#line 125
  unsigned long result;
#line 125

#line 125
  result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow();
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 147 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void HplSensirionSht11P$Timer$startOneShot(uint32_t arg_0x7ef80068){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(10U, arg_0x7ef80068);
#line 62
}
#line 62
# 51 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/HplSensirionSht11P.nc"
static inline  error_t HplSensirionSht11P$SplitControl$start(void)
#line 51
{
  HplSensirionSht11P$Timer$startOneShot(11);
  return SUCCESS;
}

# 79 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$start(void){
#line 79
  unsigned char result;
#line 79

#line 79
  result = HplSensirionSht11P$SplitControl$start();
#line 79

#line 79
  return result;
#line 79
}
#line 79
# 84 "/opt/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline   error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$default$start(void)
#line 84
{
  return SUCCESS;
}

# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$start(void){
#line 73
  unsigned char result;
#line 73

#line 73
  result = /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$default$start();
#line 73

#line 73
  return result;
#line 73
}
#line 73
# 63 "/opt/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$startTask$runTask(void)
#line 63
{
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$start();
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$start();
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 55 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline   uint8_t HplAtm128Timer0AsyncC$Timer$get(void)
#line 55
{
#line 55
  return * (volatile uint8_t *)(0x32 + 0x20);
}

# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$timer_size /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$get(void){
#line 52
  unsigned char result;
#line 52

#line 52
  result = HplAtm128Timer0AsyncC$Timer$get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 41 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$timer_size /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$get(void)
{
  return /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$get();
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$get(void){
#line 53
  unsigned char result;
#line 53

#line 53
  result = /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$get();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 103 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline   Atm128_TIFR_t HplAtm128Timer0AsyncC$TimerCtrl$getInterruptFlag(void)
#line 103
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

#line 120
static inline bool HplAtm128Timer0AsyncC$overflowed(void)
#line 120
{
  return HplAtm128Timer0AsyncC$TimerCtrl$getInterruptFlag().bits.tov0;
}

static inline   bool HplAtm128Timer0AsyncC$Timer$test(void)
#line 124
{
  return HplAtm128Timer0AsyncC$overflowed();
}

# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   bool /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$test(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = HplAtm128Timer0AsyncC$Timer$test();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 46 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   bool /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$isOverflowPending(void)
{
  return /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$test();
}

# 60 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   bool /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$isOverflowPending(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$isOverflowPending();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t HplSensirionSht11P$stopTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(HplSensirionSht11P$stopTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)50U &= ~(1 << 1);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplSensirionSht11P$DATA$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$clr();
#line 30
}
#line 30
# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)49U &= ~(1 << 1);
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplSensirionSht11P$DATA$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeInput();
#line 33
}
#line 33
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)50U &= ~(1 << 0);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplSensirionSht11P$SCK$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$clr();
#line 30
}
#line 30
# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)49U &= ~(1 << 0);
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplSensirionSht11P$SCK$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$makeInput();
#line 33
}
#line 33
# 60 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/HplSensirionSht11P.nc"
static inline  error_t HplSensirionSht11P$SplitControl$stop(void)
#line 60
{
  HplSensirionSht11P$SCK$makeInput();
  HplSensirionSht11P$SCK$clr();
  HplSensirionSht11P$DATA$makeInput();
  HplSensirionSht11P$DATA$clr();
  HplSensirionSht11P$stopTask$postTask();
  return SUCCESS;
}

# 102 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$stop(void){
#line 102
  unsigned char result;
#line 102

#line 102
  result = HplSensirionSht11P$SplitControl$stop();
#line 102

#line 102
  return result;
#line 102
}
#line 102
# 112 "/opt/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline   error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$default$stop(void)
#line 112
{
  return SUCCESS;
}

# 82 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$stop(void){
#line 82
  unsigned char result;
#line 82

#line 82
  result = /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$default$stop();
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 120 "/opt/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline    void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$PowerDownCleanup$default$cleanup(void)
#line 120
{
}

# 52 "/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
inline static   void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$PowerDownCleanup$cleanup(void){
#line 52
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$PowerDownCleanup$default$cleanup();
#line 52
}
#line 52
# 68 "/opt/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopTask$runTask(void)
#line 68
{
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$PowerDownCleanup$cleanup();
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$stop();
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$stop();
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$request(/*InteractionC.SensirionSht11C*/SensirionSht11C$0$HUM_KEY);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 71 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  error_t /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$read(void)
#line 71
{
  /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$request();
  return SUCCESS;
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  error_t InteractionM$Read_Humi$read(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$read();
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 357 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
static inline  void InteractionM$Read_Temp$readDone(error_t err, uint16_t val)
#line 357
{
  if (err == SUCCESS) {
    InteractionM$MyTemp = val;
    }
#line 360
  InteractionM$Read_Humi$read();
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$readDone(error_t arg_0x7e753480, /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$val_t arg_0x7e753608){
#line 63
  InteractionM$Read_Temp$readDone(arg_0x7e753480, arg_0x7e753608);
#line 63
}
#line 63
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$release(void){
#line 101
  unsigned char result;
#line 101

#line 101
  result = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$release(/*InteractionC.SensirionSht11C*/SensirionSht11C$0$TEMP_KEY);
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 61 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
inline static  error_t /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureTemperature(void){
#line 61
  unsigned char result;
#line 61

#line 61
  result = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureTemperature(/*InteractionC.SensirionSht11C*/SensirionSht11C$0$TEMP_KEY);
#line 61

#line 61
  return result;
#line 61
}
#line 61
# 58 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$granted(void)
#line 58
{
  error_t result;

#line 60
  if ((result = /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureTemperature()) != SUCCESS) {
      /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$release();
      /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$readDone(result, 0);
    }
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  error_t /*InteractionC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$read(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$read(/*InteractionC.PhotoSensorC.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 33 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/ADC_ShiftM.nc"
static inline  error_t /*InteractionC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$read(void)
#line 33
{
  return /*InteractionC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$read();
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  error_t InteractionM$Read_Photo$read(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = /*InteractionC.PhotoSensorC.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$read();
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 363 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
static inline  void InteractionM$Read_Humi$readDone(error_t err, uint16_t val)
#line 363
{
  if (err == SUCCESS) {
    InteractionM$MyHumi = val;
    }
#line 366
  InteractionM$Read_Photo$read();
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$readDone(error_t arg_0x7e753480, /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$val_t arg_0x7e753608){
#line 63
  InteractionM$Read_Humi$readDone(arg_0x7e753480, arg_0x7e753608);
#line 63
}
#line 63
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$release(void){
#line 101
  unsigned char result;
#line 101

#line 101
  result = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$release(/*InteractionC.SensirionSht11C*/SensirionSht11C$0$HUM_KEY);
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 76 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
inline static  error_t /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureHumidity(void){
#line 76
  unsigned char result;
#line 76

#line 76
  result = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureHumidity(/*InteractionC.SensirionSht11C*/SensirionSht11C$0$HUM_KEY);
#line 76

#line 76
  return result;
#line 76
}
#line 76
# 76 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$granted(void)
#line 76
{
  error_t result;

#line 78
  if ((result = /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureHumidity()) != SUCCESS) {
      /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$release();
      /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$readDone(result, 0);
    }
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Temperature$readDone(error_t arg_0x7e753480, /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Temperature$val_t arg_0x7e753608){
#line 63
  TempSensorM$Read_Temp$readDone(arg_0x7e753480, arg_0x7e753608);
#line 63
}
#line 63
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$TempResource$release(void){
#line 101
  unsigned char result;
#line 101

#line 101
  result = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$release(/*TempSensorC.Sensor*/SensirionSht11C$1$TEMP_KEY);
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 61 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
inline static  error_t /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$measureTemperature(void){
#line 61
  unsigned char result;
#line 61

#line 61
  result = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureTemperature(/*TempSensorC.Sensor*/SensirionSht11C$1$TEMP_KEY);
#line 61

#line 61
  return result;
#line 61
}
#line 61
# 58 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$TempResource$granted(void)
#line 58
{
  error_t result;

#line 60
  if ((result = /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$measureTemperature()) != SUCCESS) {
      /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$TempResource$release();
      /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Temperature$readDone(result, 0);
    }
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Humidity$readDone(error_t arg_0x7e753480, /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Humidity$val_t arg_0x7e753608){
#line 63
  TempSensorM$Read_Humidity$readDone(arg_0x7e753480, arg_0x7e753608);
#line 63
}
#line 63
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$HumResource$release(void){
#line 101
  unsigned char result;
#line 101

#line 101
  result = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$release(/*TempSensorC.Sensor*/SensirionSht11C$1$HUM_KEY);
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 76 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
inline static  error_t /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$measureHumidity(void){
#line 76
  unsigned char result;
#line 76

#line 76
  result = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureHumidity(/*TempSensorC.Sensor*/SensirionSht11C$1$HUM_KEY);
#line 76

#line 76
  return result;
#line 76
}
#line 76
# 76 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$HumResource$granted(void)
#line 76
{
  error_t result;

#line 78
  if ((result = /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$measureHumidity()) != SUCCESS) {
      /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$HumResource$release();
      /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Humidity$readDone(result, 0);
    }
}

# 184 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(uint8_t id)
#line 184
{
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$granted(uint8_t arg_0x7e544d40){
#line 92
  switch (arg_0x7e544d40) {
#line 92
    case /*InteractionC.SensirionSht11C*/SensirionSht11C$0$TEMP_KEY:
#line 92
      /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$granted();
#line 92
      break;
#line 92
    case /*InteractionC.SensirionSht11C*/SensirionSht11C$0$HUM_KEY:
#line 92
      /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$granted();
#line 92
      break;
#line 92
    case /*TempSensorC.Sensor*/SensirionSht11C$1$TEMP_KEY:
#line 92
      /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$TempResource$granted();
#line 92
      break;
#line 92
    case /*TempSensorC.Sensor*/SensirionSht11C$1$HUM_KEY:
#line 92
      /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$HumResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$default$granted(arg_0x7e544d40);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 198 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 198
{
}

# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x7e542910){
#line 49
    /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(arg_0x7e542910);
#line 49
}
#line 49
# 172 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline  void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void)
#line 172
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 173
    {
      /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$resId = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$reqResId;
      /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$state = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$RES_BUSY;
    }
#line 176
    __nesc_atomic_end(__nesc_atomic); }
  /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$resId);
  /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$granted(/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$resId);
}

# 43 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$disable(void)
#line 43
{
#line 43
  * (volatile uint8_t *)(0x39 + 0x20) &= ~(1 << 1);
}

# 40 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable(void){
#line 40
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$disable();
#line 40
}
#line 40
# 33 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline   error_t /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$disable(void)
#line 33
{
  /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable();
  return SUCCESS;
}

# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$disable(void){
#line 50
  unsigned char result;
#line 50

#line 50
  result = /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$disable();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)50U |= 1 << 1;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$set();
#line 29
}
#line 29




inline static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeInput();
#line 33
}
#line 33
#line 30
inline static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$clr();
#line 30
}
#line 30
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)49U |= 1 << 0;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$makeOutput();
#line 35
}
#line 35
# 220 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$initPins(void)
#line 220
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$makeOutput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeInput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$disable();
}

# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)50U |= 1 << 0;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortD.Bit0*/HplAtm128GeneralIOPinP$24$IO$set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)49U |= 1 << 1;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$makeOutput();
#line 35
}
#line 35
# 228 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$resetDevice(void)
#line 228
{
  uint8_t i;

#line 230
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeOutput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
  for (i = 0; i < 9; i++) {
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$set();
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
    }
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$clr();
#line 30
}
#line 30
# 239 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$transmissionStart(void)
#line 239
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeOutput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$clr();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
}

static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$sendCommand(uint8_t _cmd)
#line 251
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$writeByte(_cmd);
}

# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$get(void)
#line 45
{
#line 45
  return (* (volatile uint8_t *)48U & (1 << 1)) != 0;
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortD.Bit1*/HplAtm128GeneralIOPinP$25$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 29 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline   error_t /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void)
#line 29
{
  return /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$enable(FALSE);
}

# 43 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$enableFallingEdge(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 281 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$enableInterrupt(void)
#line 281
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeInput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$enableFallingEdge();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$clear(void)
#line 41
{
#line 41
  * (volatile uint8_t *)(0x38 + 0x20) = 1 << 1;
}

# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear(void){
#line 45
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$clear();
#line 45
}
#line 45
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$edge(bool low_to_high)
#line 47
{
  * (volatile uint8_t *)106U |= 1 << 3;

  if (low_to_high) {
    * (volatile uint8_t *)106U |= 1 << 2;
    }
  else {
#line 53
    * (volatile uint8_t *)106U &= ~(1 << 2);
    }
}

# 59 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(bool arg_0x7e5c8088){
#line 59
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$edge(arg_0x7e5c8088);
#line 59
}
#line 59
# 42 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$enable(void)
#line 42
{
#line 42
  * (volatile uint8_t *)(0x39 + 0x20) |= 1 << 1;
}

# 35 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable(void){
#line 35
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$enable();
#line 35
}
#line 35
# 372 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
static inline void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$ack(void)
#line 372
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeOutput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$clr();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeInput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set();
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 50 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   bool /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void)
#line 50
{
  return /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   bool /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Queue$isEmpty(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 58 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   resource_client_id_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void)
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qHead != /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
        uint8_t id = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qHead;

#line 62
        /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[/*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qHead];
        if (/*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
          }
#line 65
        /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[id] = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 66
          id;

#line 66
          return __nesc_temp;
        }
      }
#line 68
    {
      unsigned char __nesc_temp = 
#line 68
      /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   resource_client_id_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Queue$dequeue(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 96 "/opt/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline   void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$granted(void)
#line 96
{
  /* atomic removed: atomic calls only */
#line 97
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopping = TRUE;
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopTask$postTask();
}

# 46 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
inline static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceController$granted(void){
#line 46
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$granted();
#line 46
}
#line 46
# 200 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 200
{
}

# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x7e542910){
#line 55
    /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x7e542910);
#line 55
}
#line 55
# 71 "TempSensorM.nc"
static inline void TempSensorM$calc_SHT11(uint16_t p_humidity, uint16_t p_temperature)






{
  const float C1 = -4.0;
  const float C2 = 0.0405;
  const float C3 = -0.0000028;
  const float T1 = 0.01;
  const float T2 = 0.00008;

  float rh_lin;
  float rh_true;
  float t_C;
  float rh = (float )p_humidity;
  float t = (float )p_temperature;

  t_C = t * 0.01 - 40;
  rh_lin = C3 * rh * rh + C2 * rh + C1;
  rh_true = (t_C - 25) * (T1 + T2 * rh) + rh_lin;
  if (rh_true > 100) {
#line 94
    rh_true = 100;
    }
#line 95
  if (rh_true < 0.1) {
#line 95
    rh_true = 0.1;
    }
#line 96
  TempSensorM$mytemp = (uint16_t )t_C;
  TempSensorM$myhumi = (uint16_t )rh_true;
}

# 112 "LCDSetterM.nc"
static inline  void LCDSetterM$LCDSetter$setLCD(uint8_t type, float value, float avg, float stdev)
{
  LCDSetterM$LCDDisplayType = type;
  LCDSetterM$LCDvalue = value;
  LCDSetterM$LCDavg = avg;
  LCDSetterM$LCDstdev = stdev;
}

# 3 "LCDSetter.nc"
inline static  void SerialAppM$LCDSetter$setLCD(uint8_t arg_0x7ef43030, float arg_0x7ef431b0, float arg_0x7ef43330, float arg_0x7ef434b0){
#line 3
  LCDSetterM$LCDSetter$setLCD(arg_0x7ef43030, arg_0x7ef431b0, arg_0x7ef43330, arg_0x7ef434b0);
#line 3
}
#line 3
# 37 "SerialAppM.nc"
static inline  void SerialAppM$TempSensor$done(uint16_t temp, uint16_t humid)
#line 37
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 38
    {
      if (SerialAppM$turn == SerialAppM$TEMP) {
          float *values = SerialAppM$getValues(temp);

#line 41
          SerialAppM$LCDSetter$setLCD(SerialAppM$turn, values[0], values[1], values[2]);
          SerialAppM$turn = SerialAppM$HUMID;
        }
      if (SerialAppM$turn == SerialAppM$HUMID) {
          float *values = SerialAppM$getValues(humid);

#line 46
          SerialAppM$LCDSetter$setLCD(SerialAppM$turn, values[0], values[1], values[2]);
          SerialAppM$turn = SerialAppM$UR;
        }
    }
#line 49
    __nesc_atomic_end(__nesc_atomic); }
}

# 3 "TempSensor.nc"
inline static  void TempSensorM$TempSensor$done(uint16_t arg_0x7ef41a88, uint16_t arg_0x7ef41c18){
#line 3
  SerialAppM$TempSensor$done(arg_0x7ef41a88, arg_0x7ef41c18);
#line 3
}
#line 3
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$TempResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$request(/*TempSensorC.Sensor*/SensirionSht11C$1$TEMP_KEY);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 53 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  error_t /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Temperature$read(void)
#line 53
{
  /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$TempResource$request();
  return SUCCESS;
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  error_t TempSensorM$Read_Temp$read(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Temperature$read();
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 186 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id)
#line 186
{
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(uint8_t arg_0x7e5436c8){
#line 43
    /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(arg_0x7e5436c8);
#line 43
}
#line 43
# 54 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   bool /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id)
#line 54
{
  return /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[id] != /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY || /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qTail == id;
}

#line 72
static inline   error_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(id)) {
        if (/*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = id;
          }
        else {
#line 78
          /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[/*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qTail] = id;
          }
#line 79
        /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = id;
        {
          unsigned char __nesc_temp = 
#line 80
          SUCCESS;

#line 80
          return __nesc_temp;
        }
      }
#line 82
    {
      unsigned char __nesc_temp = 
#line 82
      EBUSY;

#line 82
      return __nesc_temp;
    }
  }
}

# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x7e552010){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(arg_0x7e552010);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$startTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$startTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 74 "/opt/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline   void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$requested(void)
#line 74
{
  if (/*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopping == FALSE) {
      /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$startTask$postTask();
    }
  else {
#line 78
    /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$requested = TRUE;
    }
}

# 73 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
inline static   void /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceController$requested(void){
#line 73
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$requested();
#line 73
}
#line 73
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$HumResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$request(/*TempSensorC.Sensor*/SensirionSht11C$1$HUM_KEY);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 71 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  error_t /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Humidity$read(void)
#line 71
{
  /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$HumResource$request();
  return SUCCESS;
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  error_t TempSensorM$Read_Humidity$read(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Humidity$read();
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 101 "/opt/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$stopDone(error_t error)
#line 101
{
  if (/*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$requested == TRUE) {
      /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$StdControl$start();
      /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$start();
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 106
    {
      /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$requested = FALSE;
      /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopping = FALSE;
    }
#line 109
    __nesc_atomic_end(__nesc_atomic); }
}

# 110 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void HplSensirionSht11P$SplitControl$stopDone(error_t arg_0x7e5e4e68){
#line 110
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$stopDone(arg_0x7e5e4e68);
#line 110
}
#line 110
# 69 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/HplSensirionSht11P.nc"
static inline  void HplSensirionSht11P$stopTask$runTask(void)
#line 69
{
  HplSensirionSht11P$SplitControl$stopDone(SUCCESS);
}

# 152 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num].isrunning = FALSE;
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$stop(void){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(11U);
#line 67
}
#line 67
# 320 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
static inline  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readSensor$runTask(void)
#line 320
{
  uint16_t data = 0;
  uint8_t crc = 0;

  if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy == FALSE) {


      return;
    }

  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$stop();

  data = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readByte() << 8;
  data |= /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readByte();

  crc = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readByte();

  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$endTransmission();

  switch (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$cmd) {
      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_MEASURE_TEMPERATURE: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureTemperatureDone(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$currentClient, SUCCESS, data);
      break;

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_MEASURE_HUMIDITY: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureHumidityDone(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$currentClient, SUCCESS, data);
      break;

      default: 
        break;
    }
}

# 95 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$measureTemperatureDone(error_t result, uint16_t val)
#line 95
{
}

#line 66
static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$measureTemperatureDone(error_t result, uint16_t val)
#line 66
{
  /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$TempResource$release();
  /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Temperature$readDone(result, val);
}

#line 95
static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureTemperatureDone(error_t result, uint16_t val)
#line 95
{
}

#line 66
static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureTemperatureDone(error_t result, uint16_t val)
#line 66
{
  /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$release();
  /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$readDone(result, val);
}

#line 84
static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$measureHumidityDone(error_t result, uint16_t val)
#line 84
{
  /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$HumResource$release();
  /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Humidity$readDone(result, val);
}


static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$measureHumidityDone(error_t result, uint16_t val)
#line 90
{
}

#line 84
static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureHumidityDone(error_t result, uint16_t val)
#line 84
{
  /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$HumResource$release();
  /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Humidity$readDone(result, val);
}


static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureHumidityDone(error_t result, uint16_t val)
#line 90
{
}

#line 92
static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$writeStatusRegDone(error_t result)
#line 92
{
}



static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$writeStatusRegDone(error_t result)
#line 97
{
}

#line 92
static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$writeStatusRegDone(error_t result)
#line 92
{
}



static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$writeStatusRegDone(error_t result)
#line 97
{
}

# 410 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
static inline   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$writeStatusRegDone(uint8_t client, error_t result)
#line 410
{
}

# 116 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
inline static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$writeStatusRegDone(uint8_t arg_0x7e657200, error_t arg_0x7e6873a0){
#line 116
  switch (arg_0x7e657200) {
#line 116
    case /*InteractionC.SensirionSht11C*/SensirionSht11C$0$TEMP_KEY:
#line 116
      /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$writeStatusRegDone(arg_0x7e6873a0);
#line 116
      break;
#line 116
    case /*InteractionC.SensirionSht11C*/SensirionSht11C$0$HUM_KEY:
#line 116
      /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$writeStatusRegDone(arg_0x7e6873a0);
#line 116
      break;
#line 116
    case /*TempSensorC.Sensor*/SensirionSht11C$1$TEMP_KEY:
#line 116
      /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$writeStatusRegDone(arg_0x7e6873a0);
#line 116
      break;
#line 116
    case /*TempSensorC.Sensor*/SensirionSht11C$1$HUM_KEY:
#line 116
      /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$writeStatusRegDone(arg_0x7e6873a0);
#line 116
      break;
#line 116
    default:
#line 116
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$writeStatusRegDone(arg_0x7e657200, arg_0x7e6873a0);
#line 116
      break;
#line 116
    }
#line 116
}
#line 116
# 91 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$readStatusRegDone(error_t result, uint8_t val)
#line 91
{
}



static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$readStatusRegDone(error_t result, uint8_t val)
#line 96
{
}

#line 91
static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$readStatusRegDone(error_t result, uint8_t val)
#line 91
{
}



static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$readStatusRegDone(error_t result, uint8_t val)
#line 96
{
}

# 409 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
static inline   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$readStatusRegDone(uint8_t client, error_t result, uint8_t val)
#line 409
{
}

# 100 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
inline static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$readStatusRegDone(uint8_t arg_0x7e657200, error_t arg_0x7e688730, uint8_t arg_0x7e6888b8){
#line 100
  switch (arg_0x7e657200) {
#line 100
    case /*InteractionC.SensirionSht11C*/SensirionSht11C$0$TEMP_KEY:
#line 100
      /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$readStatusRegDone(arg_0x7e688730, arg_0x7e6888b8);
#line 100
      break;
#line 100
    case /*InteractionC.SensirionSht11C*/SensirionSht11C$0$HUM_KEY:
#line 100
      /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$readStatusRegDone(arg_0x7e688730, arg_0x7e6888b8);
#line 100
      break;
#line 100
    case /*TempSensorC.Sensor*/SensirionSht11C$1$TEMP_KEY:
#line 100
      /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$readStatusRegDone(arg_0x7e688730, arg_0x7e6888b8);
#line 100
      break;
#line 100
    case /*TempSensorC.Sensor*/SensirionSht11C$1$HUM_KEY:
#line 100
      /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$readStatusRegDone(arg_0x7e688730, arg_0x7e6888b8);
#line 100
      break;
#line 100
    default:
#line 100
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$readStatusRegDone(arg_0x7e657200, arg_0x7e688730, arg_0x7e6888b8);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 388 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
static inline  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone$runTask(void)
#line 388
{
  bool _writeFail = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$writeFail;

#line 390
  switch (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$cmd) {
      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_READ_STATUS: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$readStatusRegDone(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$currentClient, SUCCESS, /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$status);
      break;
      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_WRITE_STATUS: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$writeFail = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$writeStatusRegDone(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$currentClient, _writeFail ? FAIL : SUCCESS);
      break;
      default: 

        break;
    }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t InteractionM$TaskGetSensorDataDone$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(InteractionM$TaskGetSensorDataDone);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 339 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
static inline  void InteractionM$SendBasicSensor$runTask(void)
#line 339
{
  InteractionM$Return_App_Size = 2;

  InteractionM$MyAppPack->AppType = InteractionM$MyAppType;
  InteractionM$MyAppPack->OptType = InteractionM$MyOptType;

  InteractionM$MyAppPack->AppData.sensor.SamplingInfo = InteractionM$MySampleI;
  InteractionM$MyAppPack->AppData.sensor.Sdata.ADC_data[0] = InteractionM$MyTemp;
  InteractionM$MyAppPack->AppData.sensor.Sdata.ADC_data[1] = InteractionM$MyHumi;
  InteractionM$MyAppPack->AppData.sensor.Sdata.ADC_data[2] = InteractionM$MyPhoto;
  InteractionM$MyAppPack->AppData.sensor.Sdata.ADC_data[3] = InteractionM$MyUltrared;
  InteractionM$MyAppPack->AppData.sensor.Sdata.ADC_data[4] = 0;
  InteractionM$MyAppPack->AppData.sensor.Sdata.ADC_data[5] = 0;

  InteractionM$Return_App_Size += sizeof(Sensor_data_t );
  InteractionM$TaskGetSensorDataDone$postTask();
}

# 24 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/CommunicationWithOPT.nc"
inline static  void InteractionM$CommunicationWithOPT$SendControlMSG(uint8_t arg_0x7e7466d8, uint8_t arg_0x7e746860, uint8_t arg_0x7e7469e8, uint8_t *arg_0x7e746b98){
#line 24
  CommunicationWithOPTM$CommunicationWithOPT$SendControlMSG(arg_0x7e7466d8, arg_0x7e746860, arg_0x7e7469e8, arg_0x7e746b98);
#line 24
}
#line 24
# 144 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/CommunicationWithOPTM.nc"
static inline  void CommunicationWithOPTM$CommunicationWithOPT$SpecialControlMSG(uint8_t TXpacketType, uint8_t OptType, uint8_t Cmd1, uint8_t Cmd2, uint8_t *SetDataBuff, uint8_t RXpacketType)
#line 144
{
  CommunicationWithOPTM$CSST.stxm = 0x7E;
  CommunicationWithOPTM$CSST.etxm = 0x7E;
  CommunicationWithOPTM$CSST.packetType = TXpacketType;
  CommunicationWithOPTM$CSST.optType = (uint16_t )OptType;
  CommunicationWithOPTM$CSST.subCmd1 = Cmd1;
  CommunicationWithOPTM$CSST.subCmd2 = Cmd2;
  memcpy(CommunicationWithOPTM$CSST.ConfigData.GeneralData, SetDataBuff, 16);




  CommunicationWithOPTM$UARTSend((uint8_t *)&CommunicationWithOPTM$CSST, CommunicationWithOPTM$CSST_Size);

  CommunicationWithOPTM$CSST.packetType = RXpacketType;
}

# 27 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/CommunicationWithOPT.nc"
inline static  void InteractionM$CommunicationWithOPT$SpecialControlMSG(uint8_t arg_0x7e745b18, uint8_t arg_0x7e745ca0, uint8_t arg_0x7e745e28, uint8_t arg_0x7e743010, uint8_t *arg_0x7e7431c0, uint8_t arg_0x7e743350){
#line 27
  CommunicationWithOPTM$CommunicationWithOPT$SpecialControlMSG(arg_0x7e745b18, arg_0x7e745ca0, arg_0x7e745e28, arg_0x7e743010, arg_0x7e7431c0, arg_0x7e743350);
#line 27
}
#line 27
# 16 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/NoSCSuartDBGC.nc"
static inline   void NoSCSuartDBGC$SCSuartDBG$UARTSend(uint8_t *data, uint8_t len)
#line 16
{
}

# 30 "/opt/tinyos-2.x/tos/platforms/zigbex/SCSuartDBG.nc"
inline static   void InteractionM$SCSuartDBG$UARTSend(uint8_t *arg_0x7e7a0088, uint8_t arg_0x7e7a0210){
#line 30
  NoSCSuartDBGC$SCSuartDBG$UARTSend(arg_0x7e7a0088, arg_0x7e7a0210);
#line 30
}
#line 30
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void InteractionM$SensorCheckTimer$startPeriodic(uint32_t arg_0x7ef81a70){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(8U, arg_0x7ef81a70);
#line 53
}
#line 53
#line 67
inline static  void InteractionM$SensorCheckTimer$stop(void){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(8U);
#line 67
}
#line 67
# 25 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/CommunicationWithOPT.nc"
inline static  void InteractionM$CommunicationWithOPT$RequestSensorMSG(uint8_t arg_0x7e745068){
#line 25
  CommunicationWithOPTM$CommunicationWithOPT$RequestSensorMSG(arg_0x7e745068);
#line 25
}
#line 25
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$request(/*InteractionC.SensirionSht11C*/SensirionSht11C$0$TEMP_KEY);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 53 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  error_t /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$read(void)
#line 53
{
  /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$TempResource$request();
  return SUCCESS;
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  error_t InteractionM$Read_Temp$read(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Temperature$read();
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 293 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
static inline  void InteractionM$ProcessCMD$runTask(void)
#line 293
{
  if (InteractionM$RecvCMD.CMD_Data.OptConfig.packetType == 0x02) {
      sprintf(InteractionM$IC_DBG_buff, "%d R-GetS-CMD[%d]\r\n", TOS_NODE_ID, InteractionM$RecvCMD.CMD_Data.OptConfig.optType);
      InteractionM$SCSuartDBG$UARTSend(InteractionM$IC_DBG_buff, strlen(InteractionM$IC_DBG_buff));

      if (InteractionM$RecvCMD.CMD_Data.OptConfig.optType == 0x12) {
        InteractionM$Read_Temp$read();
        }
      else {
#line 301
        InteractionM$CommunicationWithOPT$RequestSensorMSG(InteractionM$MyOptType);
        }
#line 302
      return;
    }
  else {
#line 304
    if (InteractionM$RecvCMD.CMDType == 0x00) {

        if (InteractionM$MySampleI != InteractionM$RecvCMD.CMD_Data.SetConfig.SetSampleTime) {
            InteractionM$MySampleI = InteractionM$RecvCMD.CMD_Data.SetConfig.SetSampleTime;
            InteractionM$SensorCheckTimer$stop();
            InteractionM$SensorCheckTimer$startPeriodic(InteractionM$MySampleI);
          }
        sprintf(InteractionM$IC_DBG_buff, "%d R-SC-CMD!! [%d, %d, %d]\r\n", TOS_NODE_ID, InteractionM$RecvCMD.CMD_Data.SetConfig.NwkProtocolType, InteractionM$RecvCMD.CMD_Data.SetConfig.Gossiping_PercentageInfo, InteractionM$RecvCMD.CMD_Data.SetConfig.SetSampleTime);

        InteractionM$SCSuartDBG$UARTSend(InteractionM$IC_DBG_buff, strlen(InteractionM$IC_DBG_buff));
      }
    else {
        sprintf(InteractionM$IC_DBG_buff, "%d R-OC-CMD!! [%d, %d, %d]\r\n", TOS_NODE_ID, InteractionM$RecvCMD.CMD_Data.OptConfig.optType, InteractionM$RecvCMD.CMD_Data.OptConfig.subCmd1, InteractionM$RecvCMD.CMD_Data.OptConfig.subCmd2);

        InteractionM$SCSuartDBG$UARTSend(InteractionM$IC_DBG_buff, strlen(InteractionM$IC_DBG_buff));

        if (InteractionM$MyOptType == 0x09) {
            InteractionM$CommunicationWithOPT$SpecialControlMSG(0x09, InteractionM$MyOptType, InteractionM$RecvCMD.CMD_Data.OptConfig.subCmd1, InteractionM$RecvCMD.CMD_Data.OptConfig.subCmd2, InteractionM$RecvCMD.CMD_Data.OptConfig.ConfigData.GeneralData, 0x0A);
          }
        else 
          {
            InteractionM$CommunicationWithOPT$SendControlMSG(InteractionM$MyOptType, InteractionM$RecvCMD.CMD_Data.OptConfig.subCmd1, InteractionM$RecvCMD.CMD_Data.OptConfig.subCmd2, InteractionM$RecvCMD.CMD_Data.OptConfig.ConfigData.GeneralData);
          }
      }
    }
}

# 128 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/CommunicationWithOPTM.nc"
static inline  void CommunicationWithOPTM$CommunicationWithOPT$RequestLongMSG(uint8_t OptType, uint8_t Seq)
#line 128
{
  CommunicationWithOPTM$CSST.stxm = 0x7E;
  CommunicationWithOPTM$CSST.etxm = 0x7E;
  CommunicationWithOPTM$CSST.packetType = 0x0A;
  CommunicationWithOPTM$CSST.optType = (uint16_t )OptType;
  CommunicationWithOPTM$CSST.subCmd1 = Seq;







  CommunicationWithOPTM$UARTSend((uint8_t *)&CommunicationWithOPTM$CSST, CommunicationWithOPTM$CSST_Size);
}

# 26 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/CommunicationWithOPT.nc"
inline static  void InteractionM$CommunicationWithOPT$RequestLongMSG(uint8_t arg_0x7e7454f0, uint8_t arg_0x7e745678){
#line 26
  CommunicationWithOPTM$CommunicationWithOPT$RequestLongMSG(arg_0x7e7454f0, arg_0x7e745678);
#line 26
}
#line 26
# 211 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
static inline  void InteractionM$TryToGetSensorData$runTask(void)
#line 211
{
  if (InteractionM$MyOptType == 0x12) {
      sprintf(InteractionM$IC_DBG_buff, "%d getSFire_B:%d\r\n", TOS_NODE_ID, InteractionM$MyOptType);
      InteractionM$SCSuartDBG$UARTSend(InteractionM$IC_DBG_buff, strlen(InteractionM$IC_DBG_buff));
      InteractionM$Read_Temp$read();
    }
  else {
#line 217
    if (InteractionM$MyOptType == 0x06 || InteractionM$MyOptType == 0x0D) {
        sprintf(InteractionM$IC_DBG_buff, "%d getSFire_L:%X, Seq:%d\r\n", TOS_NODE_ID, InteractionM$MyOptType, InteractionM$Seq_For_LongData);
        InteractionM$SCSuartDBG$UARTSend(InteractionM$IC_DBG_buff, strlen(InteractionM$IC_DBG_buff));
        if (InteractionM$MyOptType == 0x0D) {
            InteractionM$SetC327_Check_Value(4);
          }
        InteractionM$CommunicationWithOPT$RequestLongMSG(InteractionM$MyOptType, InteractionM$Seq_For_LongData);
      }
    else {
#line 225
      if (InteractionM$MyOptType == 0x09) {
          return;
        }
      else {
          sprintf(InteractionM$IC_DBG_buff, "%d getSFire_S:%d\r\n", TOS_NODE_ID, InteractionM$MyOptType);
          InteractionM$SCSuartDBG$UARTSend(InteractionM$IC_DBG_buff, strlen(InteractionM$IC_DBG_buff));
          InteractionM$CommunicationWithOPT$RequestSensorMSG(InteractionM$MyOptType);
        }
      }
    }
}

# 77 "LCDSetterM.nc"
static inline  void LCDSetterM$Interaction$Urgency_Data(uint8_t *Urgency_Payload, uint8_t len)
#line 77
{
}

# 29 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/Interaction.nc"
inline static  void InteractionM$Interaction$Urgency_Data(uint8_t *arg_0x7e7a70d8, uint8_t arg_0x7e7a7260){
#line 29
  LCDSetterM$Interaction$Urgency_Data(arg_0x7e7a70d8, arg_0x7e7a7260);
#line 29
}
#line 29
# 134 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
static inline  void InteractionM$Event_Urgency_Data$runTask(void)
#line 134
{
  InteractionM$Interaction$Urgency_Data((uint8_t *)&InteractionM$Urgency_MSG, sizeof(configuration_sampling_struct_t ));
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void InteractionM$C328_Reset_Timer$startPeriodic(uint32_t arg_0x7ef81a70){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(9U, arg_0x7ef81a70);
#line 53
}
#line 53
#line 67
inline static  void InteractionM$C328_Reset_Timer$stop(void){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(9U);
#line 67
}
#line 67
# 66 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
static inline  void InteractionM$Set_C328_Restart_Timer_START$runTask(void)
#line 66
{
  InteractionM$C328_Reset_Timer$stop();
  InteractionM$C328_Reset_Timer$startPeriodic(100);
}

# 30 "/opt/tinyos-2.x/tos/platforms/zigbex/SCSuartDBG.nc"
inline static   void LCDSetterM$SCSuartDBG$UARTSend(uint8_t *arg_0x7e7a0088, uint8_t arg_0x7e7a0210){
#line 30
  SCSuartDBGM$SCSuartDBG$UARTSend(arg_0x7e7a0088, arg_0x7e7a0210);
#line 30
}
#line 30
# 72 "LCDSetterM.nc"
static inline  void LCDSetterM$Interaction$getSensorDataDone(App_struct_t *App_Payload, uint8_t App_size)
#line 72
{
  sprintf(LCDSetterM$MsgBuff, "TLCD SW:%d\r\n", LCDSetterM$AP_Frame.AppData.sensor.Sdata.CHA_data[0]);
  LCDSetterM$SCSuartDBG$UARTSend(LCDSetterM$MsgBuff, strlen(LCDSetterM$MsgBuff));
}

# 26 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/Interaction.nc"
inline static  void InteractionM$Interaction$getSensorDataDone(App_struct_t *arg_0x7e7a8448, uint8_t arg_0x7e7a85d8){
#line 26
  LCDSetterM$Interaction$getSensorDataDone(arg_0x7e7a8448, arg_0x7e7a85d8);
#line 26
}
#line 26
# 57 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
static inline  void InteractionM$TaskGetSensorDataDone$runTask(void)
#line 57
{
#line 57
  InteractionM$Interaction$getSensorDataDone(InteractionM$MyAppPack, InteractionM$Return_App_Size);
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void LCDSetterM$Timer$startPeriodic(uint32_t arg_0x7ef81a70){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(6U, arg_0x7ef81a70);
#line 53
}
#line 53
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t LCDSetterM$TryToConfigure$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(LCDSetterM$TryToConfigure);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 55 "LCDSetterM.nc"
static inline  void LCDSetterM$Interaction$StartDoneConfiguration(uint8_t appType, uint8_t optType)
#line 55
{

  sprintf(LCDSetterM$MsgBuff, "%d myAppType:%X, myOptType:%X\r\n", TOS_NODE_ID, appType, optType);
  LCDSetterM$SCSuartDBG$UARTSend(LCDSetterM$MsgBuff, strlen(LCDSetterM$MsgBuff));

  if (optType != 0x05) {
      LCDSetterM$TryToConfigure$postTask();
      return;
    }


  LCDSetterM$myAppType = appType;
  LCDSetterM$myOptType = optType;

  LCDSetterM$Timer$startPeriodic(1000);
}

# 22 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/Interaction.nc"
inline static  void InteractionM$Interaction$StartDoneConfiguration(uint8_t arg_0x7e7b0648, uint8_t arg_0x7e7b07d0){
#line 22
  LCDSetterM$Interaction$StartDoneConfiguration(arg_0x7e7b0648, arg_0x7e7b07d0);
#line 22
}
#line 22
# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void InteractionM$ConfigTimeout$stop(void){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(7U);
#line 67
}
#line 67
# 56 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
static inline  void InteractionM$TaskStartDoneConfiguration$runTask(void)
#line 56
{
#line 56
  InteractionM$ConfigTimeout$stop();
#line 56
  InteractionM$Interaction$StartDoneConfiguration(InteractionM$MyAppType, InteractionM$MyOptType);
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void InteractionM$SensorCheckTimer$startOneShot(uint32_t arg_0x7ef80068){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(8U, arg_0x7ef80068);
#line 62
}
#line 62
# 275 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
static inline  void InteractionM$Interaction$SetSamplingTime(uint16_t SamplingInfo)
#line 275
{
  if (SamplingInfo != 0xFFFF) {
      InteractionM$MySampleI = SamplingInfo;
      InteractionM$SensorCheckTimer$stop();
      InteractionM$SensorCheckTimer$startPeriodic(InteractionM$MySampleI);
    }
  else {
      InteractionM$SensorCheckTimer$stop();
      InteractionM$SensorCheckTimer$startOneShot(1000);
    }
}

# 24 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/Interaction.nc"
inline static  void LCDSetterM$Interaction$SetSamplingTime(uint16_t arg_0x7e7b0c70){
#line 24
  InteractionM$Interaction$SetSamplingTime(arg_0x7e7b0c70);
#line 24
}
#line 24
# 45 "LCDSetterM.nc"
static inline  void LCDSetterM$TryToSetTimer$runTask(void)
#line 45
{
#line 45
  LCDSetterM$Interaction$SetSamplingTime(3000);
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void InteractionM$ConfigTimeout$startOneShot(uint32_t arg_0x7ef80068){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(7U, arg_0x7ef80068);
#line 62
}
#line 62
# 70 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/CommunicationWithOPTM.nc"
static inline  void CommunicationWithOPTM$CommunicationWithOPT$SendConfigureMSG(void)
#line 70
{
  memset((uint8_t *)&CommunicationWithOPTM$CSST, 0, CommunicationWithOPTM$CSST_Size);
  CommunicationWithOPTM$CSST.stxm = 0x7E;
  CommunicationWithOPTM$CSST.packetType = 0x03;
  CommunicationWithOPTM$CSST.etxm = 0x7E;



  CommunicationWithOPTM$UARTSend((uint8_t *)&CommunicationWithOPTM$CSST, CommunicationWithOPTM$CSST_Size);
}

# 22 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/CommunicationWithOPT.nc"
inline static  void InteractionM$CommunicationWithOPT$SendConfigureMSG(void){
#line 22
  CommunicationWithOPTM$CommunicationWithOPT$SendConfigureMSG();
#line 22
}
#line 22
# 242 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline   error_t HplAtm128UartP$HplUart1$enableRxIntr(void)
#line 242
{
  * (volatile uint8_t *)0x9A |= 1 << 4;
  return SUCCESS;
}

# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   error_t CommunicationWithOPTM$HPLUART$enableRxIntr(void){
#line 42
  unsigned char result;
#line 42

#line 42
  result = HplAtm128UartP$HplUart1$enableRxIntr();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 232 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline   error_t HplAtm128UartP$HplUart1$enableTxIntr(void)
#line 232
{
  * (volatile uint8_t *)0x9A |= 1 << 3;
  return SUCCESS;
}

# 40 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   error_t CommunicationWithOPTM$HPLUART$enableTxIntr(void){
#line 40
  unsigned char result;
#line 40

#line 40
  result = HplAtm128UartP$HplUart1$enableTxIntr();
#line 40

#line 40
  return result;
#line 40
}
#line 40
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static   void HplAtm128UartP$McuPowerState$update(void){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 218 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline  error_t HplAtm128UartP$Uart1RxControl$start(void)
#line 218
{
  * (volatile uint8_t *)0x9A |= 1 << 7;
  * (volatile uint8_t *)0x9A |= 1 << 4;
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t CommunicationWithOPTM$HplUartRxControl$start(void){
#line 73
  unsigned char result;
#line 73

#line 73
  result = HplAtm128UartP$Uart1RxControl$start();
#line 73

#line 73
  return result;
#line 73
}
#line 73
# 204 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline  error_t HplAtm128UartP$Uart1TxControl$start(void)
#line 204
{
  * (volatile uint8_t *)0x9A |= 1 << 6;
  * (volatile uint8_t *)0x9A |= 1 << 3;
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t CommunicationWithOPTM$HplUartTxControl$start(void){
#line 73
  unsigned char result;
#line 73

#line 73
  result = HplAtm128UartP$Uart1TxControl$start();
#line 73

#line 73
  return result;
#line 73
}
#line 73
# 54 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/CommunicationWithOPTM.nc"
static inline  void CommunicationWithOPTM$CommunicationWithOPT$start(void)
#line 54
{
  CommunicationWithOPTM$state = 0;
  CommunicationWithOPTM$buff_start = 0;
  CommunicationWithOPTM$buff_end = 0;
  CommunicationWithOPTM$HplUartTxControl$start();
  CommunicationWithOPTM$HplUartRxControl$start();
  CommunicationWithOPTM$HPLUART$enableTxIntr();
  CommunicationWithOPTM$HPLUART$enableRxIntr();
  CommunicationWithOPTM$CSST_Size = sizeof(configuration_sampling_struct_t );
  CommunicationWithOPTM$LDST_Size = sizeof(longData_struct_t );
  CommunicationWithOPTM$CSST.stxm = 0x7E;
  CommunicationWithOPTM$CSST.etxm = 0x7E;
  CommunicationWithOPTM$LDST.stxm = 0x7E;
  CommunicationWithOPTM$LDST.etxm = 0x7E;
}

# 21 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/CommunicationWithOPT.nc"
inline static  void InteractionM$CommunicationWithOPT$start(void){
#line 21
  CommunicationWithOPTM$CommunicationWithOPT$start();
#line 21
}
#line 21
# 71 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
static inline  void InteractionM$Interaction$StartConfiguration(App_struct_t *App_Payload)
#line 71
{
  InteractionM$MyAppPack = App_Payload;
  InteractionM$MyAppType = 0x02;
  InteractionM$MyOptType = 0x12;
  InteractionM$MySampleI = 3000;
  InteractionM$ControlCmd1 = 0;
  InteractionM$ControlCmd2 = 0;
  InteractionM$TestSeq = 0;
  InteractionM$StartFlag = 0;
  InteractionM$C328_Restart_Flag = 0;
  InteractionM$CommunicationWithOPT$start();
  InteractionM$CommunicationWithOPT$SendConfigureMSG();
  InteractionM$ConfigTimeout$startOneShot(4000);
}

# 21 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/Interaction.nc"
inline static  void LCDSetterM$Interaction$StartConfiguration(App_struct_t *arg_0x7e7b01b8){
#line 21
  InteractionM$Interaction$StartConfiguration(arg_0x7e7b01b8);
#line 21
}
#line 21
# 44 "LCDSetterM.nc"
static inline  void LCDSetterM$TryToConfigure$runTask(void)
#line 44
{
#line 44
  LCDSetterM$Interaction$StartConfiguration(&LCDSetterM$AP_Frame);
}

# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7eb449e0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7eb44b70){
#line 92
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$startAt(arg_0x7eb449e0, arg_0x7eb44b70);
#line 92
}
#line 92
# 47 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(t0, dt);
}

#line 82
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 83
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(t0, dt, TRUE);
}

# 118 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t arg_0x7ef72cd0, uint32_t arg_0x7ef72e60){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(arg_0x7ef72cd0, arg_0x7ef72e60);
#line 118
}
#line 118
# 132 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline   void HplAtm128Timer0AsyncC$Compare$stop(void)
#line 132
{
#line 132
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 1);
}

# 59 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop(void){
#line 59
  HplAtm128Timer0AsyncC$Compare$stop();
#line 59
}
#line 59
# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$stop(void)
#line 65
{
  /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop();
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$stop(void){
#line 62
  /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$stop();
#line 62
}
#line 62
# 173 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmCounterC.nc"
static inline   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$stop(void)
{
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$stop();
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void){
#line 62
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$stop();
#line 62
}
#line 62
# 60 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void)
{
#line 61
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop();
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop();
#line 67
}
#line 67
# 88 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void)
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(now);
        }
      else {
#line 123
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(now, min_remaining);
        }
    }
}

# 35 "SerialAppM.nc"
static inline  void SerialAppM$Timer$fired(void)
#line 35
{
}

# 83 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led1Off(void)
#line 83
{
  LedsP$Led1$set();
  ;
#line 85
  ;
}

# 66 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void LedControllerM$Leds$led1Off(void){
#line 66
  LedsP$Leds$led1Off();
#line 66
}
#line 66
# 206 "LedControllerM.nc"
static inline  void LedControllerM$LedTimer1$fired(void)
#line 206
{
  LedControllerM$Leds$led1Off();
}

# 98 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led2Off(void)
#line 98
{
  LedsP$Led2$set();
  ;
#line 100
  ;
}

# 83 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void LedControllerM$Leds$led2Off(void){
#line 83
  LedsP$Leds$led2Off();
#line 83
}
#line 83
# 209 "LedControllerM.nc"
static inline  void LedControllerM$LedTimer2$fired(void)
#line 209
{
  LedControllerM$Leds$led2Off();
}

# 68 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led0Off(void)
#line 68
{
  LedsP$Led0$set();
  ;
#line 70
  ;
}

# 50 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void LedControllerM$Leds$led0Off(void){
#line 50
  LedsP$Leds$led0Off();
#line 50
}
#line 50
# 203 "LedControllerM.nc"
static inline  void LedControllerM$LedTimer0$fired(void)
#line 203
{
  LedControllerM$Leds$led0Off();
}

#line 194
static inline void LedControllerM$clearDigit(void)
#line 194
{
  LedControllerM$Leds$led0Off();
  LedControllerM$Leds$led1Off();
  LedControllerM$Leds$led2Off();
}

#line 57
static inline  void LedControllerM$CompleteTimer$fired(void)
{
  if (LedControllerM$isCleared == 0) 
    {
      LedControllerM$setDigit(7);
      LedControllerM$isCleared = 1;
    }
  else 
    {
      LedControllerM$isCleared = 0;
      LedControllerM$CompleteTimerIterator--;
      LedControllerM$clearDigit();
    }

  if (LedControllerM$CompleteTimerIterator > 0) 
    {
      LedControllerM$CompleteTimer$startOneShot(1200 / 6 * 3);
    }
  else {
    }
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)59U &= ~(1 << 2);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led0$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr();
#line 30
}
#line 30
# 63 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led0On(void)
#line 63
{
  LedsP$Led0$clr();
  ;
#line 65
  ;
}

# 45 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void LedControllerM$Leds$led0On(void){
#line 45
  LedsP$Leds$led0On();
#line 45
}
#line 45
#line 106
inline static   uint8_t LedControllerM$Leds$get(void){
#line 106
  unsigned char result;
#line 106

#line 106
  result = LedsP$Leds$get();
#line 106

#line 106
  return result;
#line 106
}
#line 106
# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void LedControllerM$MorseTimer$stop(void){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(5U);
#line 67
}
#line 67
# 90 "LedControllerM.nc"
static inline  void LedControllerM$MorseTimer$fired(void)
{
  const static char morseCode[10][10] = { 
  " ", 
  ". ", 
  "- ", 
  "-. ", 
  "-- ", 
  "--. ", 
  "--- ", 
  "---. ", 
  "---- ", 
  "----. " };

  const static char *current;
  uint8_t CodeIndex = LedControllerM$currentMorseNumber[LedControllerM$currentMorseIndex];

  if (LedControllerM$currentMorseIndex >= 2) {
      LedControllerM$CompleteTimerIterator = 4;
      LedControllerM$MorseTimer$stop();
      LedControllerM$CompleteTimer$startOneShot(1000);
      return;
    }

  if (!current) {
    current = morseCode[CodeIndex];
    }
  LedControllerM$setDigit(2 - LedControllerM$currentMorseIndex);

  switch (*current) {
      case ' ': 
        LedControllerM$MorseTimer$startOneShot(12 * (1200 / 6));
      current++;
      break;

      case '.': 
        if (LedControllerM$Leds$get() & LEDS_LED0) {
            LedControllerM$Leds$led0On();
            LedControllerM$MorseTimer$startOneShot(1200 / 6);
          }
        else {
            LedControllerM$Leds$led0Off();
            LedControllerM$MorseTimer$startOneShot(1200 / 6);
            current++;
          }
      break;

      case '-': 
        if (LedControllerM$Leds$get() & LEDS_LED0) {

            LedControllerM$Leds$led0On();
            LedControllerM$MorseTimer$startOneShot(3 * (1200 / 6));
          }
        else {
            LedControllerM$Leds$led0Off();
            LedControllerM$MorseTimer$startOneShot(1200 / 6);
            current++;
          }
      break;

      default: 
        break;
    }


  if (! *current) 
    {
      LedControllerM$currentMorseIndex++;
      CodeIndex = LedControllerM$currentMorseNumber[LedControllerM$currentMorseIndex];
      current = morseCode[CodeIndex];
      LedControllerM$MorseTimer$startOneShot(1200 / 6);
    }
  return;
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t InteractionM$ProcessCMD$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(InteractionM$ProcessCMD);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 331 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
static inline  void InteractionM$Interaction$Process_CMD(void *PayLoad, uint8_t CMD_Len)
#line 331
{

  memcpy((uint8_t *)&InteractionM$RecvCMD, PayLoad, sizeof(Cmd_struct_t ));
  InteractionM$ProcessCMD$postTask();
}

# 28 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/Interaction.nc"
inline static  void LCDSetterM$Interaction$Process_CMD(void *arg_0x7e7a8a80, uint8_t arg_0x7e7a8c08){
#line 28
  InteractionM$Interaction$Process_CMD(arg_0x7e7a8a80, arg_0x7e7a8c08);
#line 28
}
#line 28
# 82 "LCDSetterM.nc"
static inline char *LCDSetterM$getType(void)
#line 82
{
  if (LCDSetterM$LCDDisplayType == LCDSetterM$TEMP) {
#line 83
    return "TEMP ";
    }
#line 84
  if (LCDSetterM$LCDDisplayType == LCDSetterM$HUMID) {
#line 84
    return "HUMID";
    }
#line 85
  if (LCDSetterM$LCDDisplayType == LCDSetterM$UR) {
#line 85
    return "URed ";
    }
}

#line 87
static inline  void LCDSetterM$Timer$fired(void)
#line 87
{
  Cmd_struct_t CMD_Frame;
  char SetDataBuff[32];

  CMD_Frame.CMDType = 0x09;
  CMD_Frame.CMD_Data.OptConfig.packetType = 0x09;
  CMD_Frame.CMD_Data.OptConfig.optType = 0x05;
  CMD_Frame.CMD_Data.OptConfig.subCmd1 = 0x00;


  sprintf(SetDataBuff, "%s   |   AVG   |   StDev ", LCDSetterM$getType());
  memcpy(CMD_Frame.CMD_Data.OptConfig.ConfigData.GeneralData, SetDataBuff, 16);

  LCDSetterM$Interaction$Process_CMD((void *)&CMD_Frame, sizeof(Cmd_struct_t ));


  CMD_Frame.CMD_Data.OptConfig.subCmd1 = 0x01;

  sprintf(SetDataBuff, " %f   |   %f   |   %f    ", LCDSetterM$LCDvalue, LCDSetterM$LCDavg, LCDSetterM$LCDstdev);
  memcpy(CMD_Frame.CMD_Data.OptConfig.ConfigData.GeneralData, SetDataBuff, 16);

  LCDSetterM$Interaction$Process_CMD((void *)&CMD_Frame, sizeof(Cmd_struct_t ));

  return;
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t InteractionM$TaskStartDoneConfiguration$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(InteractionM$TaskStartDoneConfiguration);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 105 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
static inline  void InteractionM$ConfigTimeout$fired(void)
#line 105
{

  InteractionM$MyAppType = 0x02;
  InteractionM$MyOptType = 0x12;
  InteractionM$TaskStartDoneConfiguration$postTask();
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t InteractionM$TryToGetSensorData$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(InteractionM$TryToGetSensorData);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 287 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
static inline  void InteractionM$SensorCheckTimer$fired(void)
#line 287
{
  InteractionM$TryToGetSensorData$postTask();
}

#line 236
static inline  void InteractionM$C328_Reset_Timer$fired(void)
#line 236
{

  InteractionM$C328_Reset_Timer_Counter++;

  if (InteractionM$C328_Reset_Timer_Counter == 0xFF) {
    InteractionM$C328_Reset_Timer_Counter = 0;
    }
  if (InteractionM$C328_Reset_Timer_Counter == InteractionM$C328_Reset_Timer_Check) {
      sprintf(InteractionM$IC_DBG_buff, "%d C328_Reset_Timer:%d\r\n", TOS_NODE_ID, InteractionM$C328_Restart_Flag);
      InteractionM$SCSuartDBG$UARTSend(InteractionM$IC_DBG_buff, strlen(InteractionM$IC_DBG_buff));

      if (InteractionM$C328_Restart_Flag < 6) {
          InteractionM$C328_Restart_Flag++;
          if (InteractionM$C328_Restart_Flag >= 6) {
              char EmptyBuff[16] = { 0 };

#line 251
              InteractionM$CommunicationWithOPT$SendControlMSG(InteractionM$MyOptType, 0x15, 0, EmptyBuff);
              InteractionM$SetC327_Check_Value(30);
            }
          else 
#line 253
            {
              InteractionM$TryToGetSensorData$postTask();
            }
        }
      else {
          InteractionM$C328_Restart_Flag = 0;
          InteractionM$Seq_For_LongData = 0;
          InteractionM$TryToGetSensorData$postTask();
        }
    }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 125 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceController$release(void)
#line 125
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 126
    {
      if (/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$resId == /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$CONTROLLER_ID) {
          if (/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$state == /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$RES_GRANTING) {
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask();
              {
                unsigned char __nesc_temp = 
#line 130
                SUCCESS;

                {
#line 130
                  __nesc_atomic_end(__nesc_atomic); 
#line 130
                  return __nesc_temp;
                }
              }
            }
          else {
#line 132
            if (/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$state == /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$RES_IMM_GRANTING) {
                /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$resId = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$reqResId;
                /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$state = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$RES_BUSY;
                {
                  unsigned char __nesc_temp = 
#line 135
                  SUCCESS;

                  {
#line 135
                    __nesc_atomic_end(__nesc_atomic); 
#line 135
                    return __nesc_temp;
                  }
                }
              }
            }
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
#line 139
  return FAIL;
}

# 56 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
inline static   error_t /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$release(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceController$release();
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 92 "/opt/tinyos-2.x/tos/lib/power/PowerManagerP.nc"
static inline  void /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$startDone(error_t error)
#line 92
{
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$ResourceController$release();
}

# 88 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void HplSensirionSht11P$SplitControl$startDone(error_t arg_0x7e5e4330){
#line 88
  /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$SplitControl$startDone(arg_0x7e5e4330);
#line 88
}
#line 88
# 56 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/HplSensirionSht11P.nc"
static inline  void HplSensirionSht11P$Timer$fired(void)
#line 56
{
  HplSensirionSht11P$SplitControl$startDone(SUCCESS);
}

# 89 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11ReaderP.nc"
static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$resetDone(error_t result)
#line 89
{
}



static inline  void /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$resetDone(error_t result)
#line 94
{
}

#line 89
static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$resetDone(error_t result)
#line 89
{
}



static inline  void /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$resetDone(error_t result)
#line 94
{
}

# 406 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
static inline   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$resetDone(uint8_t client, error_t result)
#line 406
{
}

# 54 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
inline static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$resetDone(uint8_t arg_0x7e657200, error_t arg_0x7e690820){
#line 54
  switch (arg_0x7e657200) {
#line 54
    case /*InteractionC.SensirionSht11C*/SensirionSht11C$0$TEMP_KEY:
#line 54
      /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$resetDone(arg_0x7e690820);
#line 54
      break;
#line 54
    case /*InteractionC.SensirionSht11C*/SensirionSht11C$0$HUM_KEY:
#line 54
      /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$resetDone(arg_0x7e690820);
#line 54
      break;
#line 54
    case /*TempSensorC.Sensor*/SensirionSht11C$1$TEMP_KEY:
#line 54
      /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$resetDone(arg_0x7e690820);
#line 54
      break;
#line 54
    case /*TempSensorC.Sensor*/SensirionSht11C$1$HUM_KEY:
#line 54
      /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$resetDone(arg_0x7e690820);
#line 54
      break;
#line 54
    default:
#line 54
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$resetDone(arg_0x7e657200, arg_0x7e690820);
#line 54
      break;
#line 54
    }
#line 54
}
#line 54
# 287 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
static inline  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$fired(void)
#line 287
{

  switch (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$cmd) {

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_SOFT_RESET: 

        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$resetDone(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$currentClient, SUCCESS);
      break;

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_MEASURE_TEMPERATURE: 

        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureTemperatureDone(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$currentClient, FAIL, 0);
      break;

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_MEASURE_HUMIDITY: 

        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = FALSE;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureHumidityDone(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$currentClient, FAIL, 0);
      break;

      default: 

        break;
    }
}

# 192 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x7e976cd8){
#line 72
  switch (arg_0x7e976cd8) {
#line 72
    case 0U:
#line 72
      SerialAppM$Timer$fired();
#line 72
      break;
#line 72
    case 1U:
#line 72
      LedControllerM$LedTimer1$fired();
#line 72
      break;
#line 72
    case 2U:
#line 72
      LedControllerM$LedTimer2$fired();
#line 72
      break;
#line 72
    case 3U:
#line 72
      LedControllerM$LedTimer0$fired();
#line 72
      break;
#line 72
    case 4U:
#line 72
      LedControllerM$CompleteTimer$fired();
#line 72
      break;
#line 72
    case 5U:
#line 72
      LedControllerM$MorseTimer$fired();
#line 72
      break;
#line 72
    case 6U:
#line 72
      LCDSetterM$Timer$fired();
#line 72
      break;
#line 72
    case 7U:
#line 72
      InteractionM$ConfigTimeout$fired();
#line 72
      break;
#line 72
    case 8U:
#line 72
      InteractionM$SensorCheckTimer$fired();
#line 72
      break;
#line 72
    case 9U:
#line 72
      InteractionM$C328_Reset_Timer$fired();
#line 72
      break;
#line 72
    case 10U:
#line 72
      HplSensirionSht11P$Timer$fired();
#line 72
      break;
#line 72
    case 11U:
#line 72
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x7e976cd8);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)59U &= ~(1 << 1);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led1$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr();
#line 30
}
#line 30
# 78 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led1On(void)
#line 78
{
  LedsP$Led1$clr();
  ;
#line 80
  ;
}

# 61 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void LedControllerM$Leds$led1On(void){
#line 61
  LedsP$Leds$led1On();
#line 61
}
#line 61
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)59U &= ~(1 << 0);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led2$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr();
#line 30
}
#line 30
# 93 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led2On(void)
#line 93
{
  LedsP$Led2$clr();
  ;
#line 95
  ;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void LedControllerM$Leds$led2On(void){
#line 78
  LedsP$Leds$led2On();
#line 78
}
#line 78
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   bool /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$get(void)
#line 45
{
#line 45
  return (* (volatile uint8_t *)57U & (1 << 2)) != 0;
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool LedsP$Led0$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   bool /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$get(void)
#line 45
{
#line 45
  return (* (volatile uint8_t *)57U & (1 << 1)) != 0;
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool LedsP$Led1$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   bool /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$get(void)
#line 45
{
#line 45
  return (* (volatile uint8_t *)57U & (1 << 0)) != 0;
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool LedsP$Led2$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 131 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline   void HplAtm128Timer0AsyncC$Compare$start(void)
#line 131
{
#line 131
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 1;
}

# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$start(void){
#line 56
  HplAtm128Timer0AsyncC$Compare$start();
#line 56
}
#line 56
# 130 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline   void HplAtm128Timer0AsyncC$Compare$reset(void)
#line 130
{
#line 130
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 1;
}

# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset(void){
#line 53
  HplAtm128Timer0AsyncC$Compare$reset();
#line 53
}
#line 53
# 144 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline   void HplAtm128Timer0AsyncC$Compare$set(uint8_t t)
#line 144
{
  /* atomic removed: atomic calls only */
  {
    while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 1)) 
      ;
    * (volatile uint8_t *)(0x31 + 0x20) = t;
  }
}

# 45 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type arg_0x7eaf5010){
#line 45
  HplAtm128Timer0AsyncC$Compare$set(arg_0x7eaf5010);
#line 45
}
#line 45
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$get(void){
#line 52
  unsigned char result;
#line 52

#line 52
  result = HplAtm128Timer0AsyncC$Timer$get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 74 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size t0, /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size dt)
#line 74
{
  /* atomic removed: atomic calls only */






  {
    /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size now;
#line 83
    /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size elapsed;
#line 83
    /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$timer_size expires;

    ;


    now = /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$get();
    elapsed = now + 2 - t0;
    if (elapsed >= dt) {
      expires = now + 2;
      }
    else {
#line 93
      expires = t0 + dt;
      }



    if (expires == 0) {
      expires = 1;
      }



    /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(expires - 1);
    /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset();
    /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$start();
  }
}

# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$startAt(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$size_type arg_0x7eb449e0, /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$size_type arg_0x7eb44b70){
#line 92
  /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$startAt(arg_0x7eb449e0, arg_0x7eb44b70);
#line 92
}
#line 92
# 127 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
}

# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void){
#line 72
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired();
#line 72
}
#line 72
# 163 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmCounterC.nc"
static inline   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$getAlarm(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 165
    {
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type __nesc_temp = 
#line 165
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_t0 + /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt;

      {
#line 165
        __nesc_atomic_end(__nesc_atomic); 
#line 165
        return __nesc_temp;
      }
    }
#line 167
    __nesc_atomic_end(__nesc_atomic); }
}

# 105 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void){
#line 105
  unsigned long result;
#line 105

#line 105
  result = /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$getAlarm();
#line 105

#line 105
  return result;
#line 105
}
#line 105
# 63 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void)
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt, FALSE);
    }
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
}

# 83 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline   void HplAtm128Timer0AsyncC$TimerCtrl$setControl(Atm128TimerControl_t x)
#line 83
{
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
  * (volatile uint8_t *)(0x33 + 0x20) = x.flat;
}

#line 78
static inline   Atm128TimerControl_t HplAtm128Timer0AsyncC$TimerCtrl$getControl(void)
#line 78
{
  return * (Atm128TimerControl_t *)& * (volatile uint8_t *)(0x33 + 0x20);
}

#line 71
static inline   void HplAtm128Timer0AsyncC$Timer$setScale(uint8_t s)
#line 71
{
  Atm128TimerControl_t x = HplAtm128Timer0AsyncC$TimerCtrl$getControl();

#line 73
  x.bits.cs = s;
  HplAtm128Timer0AsyncC$TimerCtrl$setControl(x);
}

# 95 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$setScale(uint8_t arg_0x7eb14428){
#line 95
  HplAtm128Timer0AsyncC$Timer$setScale(arg_0x7eb14428);
#line 95
}
#line 95
# 117 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline   void HplAtm128Timer0AsyncC$Timer$start(void)
#line 117
{
#line 117
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 0;
}

# 69 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$start(void){
#line 69
  HplAtm128Timer0AsyncC$Timer$start();
#line 69
}
#line 69
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
static inline   void HplAtm128Timer0AsyncC$Timer$set(uint8_t t)
#line 58
{
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 2)) 
    ;
  * (volatile uint8_t *)(0x32 + 0x20) = t;
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$set(/*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$timer_size arg_0x7eb217b0){
#line 58
  HplAtm128Timer0AsyncC$Timer$set(arg_0x7eb217b0);
#line 58
}
#line 58
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Init$init(void)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$set(0);
    /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$start();
    /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$setScale(3);
  }
  return SUCCESS;
}

# 45 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline  error_t /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void)
#line 45
{
  memset(/*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$resQ, /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY, sizeof /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$resQ);
  return SUCCESS;
}

# 48 "/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline  error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void)
#line 48
{
  memset(/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ, 0, sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ);
  return SUCCESS;
}

# 120 "/opt/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
static inline   uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t baudrate)
#line 120
{

  return ((uint32_t )MeasureClockC$cycles << 12) / baudrate - 1;
}

# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static   uint16_t HplAtm128UartP$Atm128Calibrate$baudrateRegister(uint32_t arg_0x7eed2520){
#line 60
  unsigned int result;
#line 60

#line 60
  result = MeasureClockC$Atm128Calibrate$baudrateRegister(arg_0x7eed2520);
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 184 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline  error_t HplAtm128UartP$Uart1Init$init(void)
#line 184
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr1 = HplAtm128UartP$Atm128Calibrate$baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0x99 = ubrr1;
  * (volatile uint8_t *)0x98 = ubrr1 >> 8;
  * (volatile uint8_t *)0x9B = stts.flat;
  * (volatile uint8_t *)0x9D = mode.flat;
  * (volatile uint8_t *)0x9A = ctrl.flat;

  return SUCCESS;
}

#line 87
static inline  error_t HplAtm128UartP$Uart0Init$init(void)
#line 87
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr0 = HplAtm128UartP$Atm128Calibrate$baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)(0x09 + 0x20) = ubrr0;
  * (volatile uint8_t *)0x90 = ubrr0 >> 8;
  * (volatile uint8_t *)(0x0B + 0x20) = stts.flat;
  * (volatile uint8_t *)0x95 = mode.flat;
  * (volatile uint8_t *)(0x0A + 0x20) = ctrl.flat;

  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t RealMainP$SoftwareInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = HplAtm128UartP$Uart0Init$init();
#line 51
  result = ecombine(result, HplAtm128UartP$Uart1Init$init());
#line 51
  result = ecombine(result, /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init());
#line 51
  result = ecombine(result, /*HplSensirionSht11C.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init());
#line 51
  result = ecombine(result, /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Init$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void SerialAppM$Timer$startPeriodic(uint32_t arg_0x7ef81a70){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(0U, arg_0x7ef81a70);
#line 53
}
#line 53
# 145 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline   error_t HplAtm128UartP$HplUart0$enableRxIntr(void)
#line 145
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 4;
  return SUCCESS;
}

# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   error_t SCSuartDBGM$HPLUART$enableRxIntr(void){
#line 42
  unsigned char result;
#line 42

#line 42
  result = HplAtm128UartP$HplUart0$enableRxIntr();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 135 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline   error_t HplAtm128UartP$HplUart0$enableTxIntr(void)
#line 135
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 3;
  return SUCCESS;
}

# 40 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   error_t SCSuartDBGM$HPLUART$enableTxIntr(void){
#line 40
  unsigned char result;
#line 40

#line 40
  result = HplAtm128UartP$HplUart0$enableTxIntr();
#line 40

#line 40
  return result;
#line 40
}
#line 40
# 121 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline  error_t HplAtm128UartP$Uart0RxControl$start(void)
#line 121
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 7;
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 4;
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t SCSuartDBGM$HplUartRxControl$start(void){
#line 73
  unsigned char result;
#line 73

#line 73
  result = HplAtm128UartP$Uart0RxControl$start();
#line 73

#line 73
  return result;
#line 73
}
#line 73
# 107 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline  error_t HplAtm128UartP$Uart0TxControl$start(void)
#line 107
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 6;
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 3;
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t SCSuartDBGM$HplUartTxControl$start(void){
#line 73
  unsigned char result;
#line 73

#line 73
  result = HplAtm128UartP$Uart0TxControl$start();
#line 73

#line 73
  return result;
#line 73
}
#line 73
# 51 "/opt/tinyos-2.x/tos/platforms/zigbex/SCSuartDBGM.nc"
static inline  error_t SCSuartDBGM$StdControl$start(void)
#line 51
{
  SCSuartDBGM$state = 0;
  SCSuartDBGM$buff_start = 0;
  SCSuartDBGM$buff_end = 0;
  SCSuartDBGM$HplUartTxControl$start();
  SCSuartDBGM$HplUartRxControl$start();
  SCSuartDBGM$HPLUART$enableTxIntr();
  SCSuartDBGM$HPLUART$enableRxIntr();
  return SUCCESS;
}

# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t LCDSetterM$SCSuartDBGstd$start(void){
#line 73
  unsigned char result;
#line 73

#line 73
  result = SCSuartDBGM$StdControl$start();
#line 73

#line 73
  return result;
#line 73
}
#line 73
# 48 "LCDSetterM.nc"
static inline  void LCDSetterM$LCDSetter$init(void)
#line 48
{
  LCDSetterM$SCSuartDBGstd$start();
  LCDSetterM$TryToConfigure$postTask();
}

# 2 "LCDSetter.nc"
inline static  void SerialAppM$LCDSetter$init(void){
#line 2
  LCDSetterM$LCDSetter$init();
#line 2
}
#line 2
# 24 "SerialAppM.nc"
static inline void SerialAppM$initC(void)
#line 24
{
  SerialAppM$LCDSetter$init();
}



static inline  void SerialAppM$Boot$booted(void)
#line 30
{
  SerialAppM$initC();
  SerialAppM$Timer$startPeriodic(1000);
}

# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
inline static  void RealMainP$Boot$booted(void){
#line 49
  SerialAppM$Boot$booted();
#line 49
}
#line 49
# 126 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline    mcu_power_t McuSleepC$McuPowerOverride$default$lowestState(void)
#line 126
{
  return ATM128_POWER_DOWN;
}

# 54 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
inline static   mcu_power_t McuSleepC$McuPowerOverride$lowestState(void){
#line 54
  unsigned char result;
#line 54

#line 54
  result = McuSleepC$McuPowerOverride$default$lowestState();
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 66 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC$getPowerState(void)
#line 66
{
  uint8_t diff;





  if (* (volatile uint8_t *)(0x37 + 0x20) & ~((((1 << 1) | (1 << 0)) | (1 << 2)) | (1 << 6)) || 
  * (volatile uint8_t *)0x7D & ~(1 << 2)) {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x0D + 0x20) & (1 << 7)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if (* (volatile uint8_t *)(0x0A + 0x20) & ((1 << 6) | (1 << 7))) {
          return ATM128_POWER_IDLE;
        }
      else {
#line 85
        if (* (volatile uint8_t *)0x9A & ((1 << 6) | (1 << 7))) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x06 + 0x20) & (1 << 7)) {
              return ATM128_POWER_ADC_NR;
            }
          else {
            if (* (volatile uint8_t *)(0x37 + 0x20) & ((1 << 1) | (1 << 0))) {




                while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
                  ;
                diff = * (volatile uint8_t *)(0x31 + 0x20) - * (volatile uint8_t *)(0x32 + 0x20);
                if (diff < EXT_STANDBY_T0_THRESHOLD || 
                * (volatile uint8_t *)(0x32 + 0x20) > 256 - EXT_STANDBY_T0_THRESHOLD) {
                  return ATM128_POWER_EXT_STANDBY;
                  }
#line 104
                return ATM128_POWER_SAVE;
              }
            else {
                return ATM128_POWER_DOWN;
              }
            }
          }
        }
      }
    }
}

# 128 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 128
{
  return m1 < m2 ? m1 : m2;
}

# 111 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline   void McuSleepC$McuSleep$sleep(void)
#line 111
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC$getPowerState(), McuSleepC$McuPowerOverride$lowestState());
  * (volatile uint8_t *)(0x35 + 0x20) = ((
  * (volatile uint8_t *)(0x35 + 0x20) & 0xe3) | (1 << 5)) | ({
#line 116
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC$atm128PowerBits[powerState];
#line 116
    uint8_t __result;

#line 116
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 118
   __asm volatile ("sei");
   __asm volatile ("sleep");
   __asm volatile ("cli");}

# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
inline static   void SchedulerBasicP$McuSleep$sleep(void){
#line 59
  McuSleepC$McuSleep$sleep();
#line 59
}
#line 59
# 67 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP$popTask(void)
{
  if (SchedulerBasicP$m_head != SchedulerBasicP$NO_TASK) 
    {
      uint8_t id = SchedulerBasicP$m_head;

#line 72
      SchedulerBasicP$m_head = SchedulerBasicP$m_next[SchedulerBasicP$m_head];
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
        }
      SchedulerBasicP$m_next[id] = SchedulerBasicP$NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP$NO_TASK;
    }
}

#line 138
static inline  void SchedulerBasicP$Scheduler$taskLoop(void)
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP$popTask()) == SchedulerBasicP$NO_TASK) 
            {
              SchedulerBasicP$McuSleep$sleep();
            }
        }
#line 150
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP$TaskBasic$runTask(nextTask);
    }
}

# 61 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static  void RealMainP$Scheduler$taskLoop(void){
#line 61
  SchedulerBasicP$Scheduler$taskLoop();
#line 61
}
#line 61
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 70 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void)
{
#line 71
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask();
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$fired(void){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired();
#line 67
}
#line 67
# 236 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmCounterC.nc"
static inline   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$fired(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt == 0) 
        {
          /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$fired();
        }
      else 
        {
          /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$set_alarm();
        }
    }
#line 248
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$fired(void){
#line 67
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$fired();
#line 67
}
#line 67
# 78 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt(void)
#line 78
{
   __asm volatile ("sei");}

# 110 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void)
#line 110
{
  /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop();
  ;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$fired();
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm128Timer0AsyncC$Compare$fired(void){
#line 49
  /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired();
#line 49
}
#line 49
# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void)
{
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$overflow(void){
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 71
}
#line 71
# 145 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmCounterC.nc"
static inline   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$overflow(void)
{
  /* atomic removed: atomic calls only */
  {
    /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_upper++;
    if ((/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_upper & /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$OVERFLOW_MASK) == 0) {
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$overflow();
      }
    if (/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_skip_overflows && ! --/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_skip_overflows) {
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$set_alarm();
      }
  }
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$overflow(void){
#line 71
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$overflow();
#line 71
}
#line 71
# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   void /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$overflow(void)
{
  /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Counter$overflow();
}

# 117 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void)
#line 117
{
}

# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$overflow(void)
#line 51
{
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void HplAtm128Timer0AsyncC$Timer$overflow(void){
#line 61
  /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$overflow();
#line 61
  /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow();
#line 61
  /*AlarmCounterMilliP.MilliCounter*/Atm128CounterC$0$Timer$overflow();
#line 61
}
#line 61
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig0$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired();
#line 41
}
#line 41
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readSensor$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readSensor);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 315 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
static inline   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$fired(void)
#line 315
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$disable();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readSensor$postTask();
}

# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$fired(void){
#line 57
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$InterruptDATA$fired();
#line 57
}
#line 57
# 38 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline   void /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void)
#line 38
{
  /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Interrupt$fired();
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired(void){
#line 64
  /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig1$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig2$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig3$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig4$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig5$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig6$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig7$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired();
#line 41
}
#line 41
# 47 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline   uint16_t HplAtm128AdcP$HplAtm128Adc$getValue(void)
#line 47
{
  return * (volatile uint16_t *)(0x04 + 0x20);
}

#line 44
static inline   Atm128Adcsra_t HplAtm128AdcP$HplAtm128Adc$getAdcsra(void)
#line 44
{
  return * (Atm128Adcsra_t *)& * (volatile uint8_t *)(0x06 + 0x20);
}

#line 110
static inline   bool HplAtm128AdcP$HplAtm128Adc$cancel(void)
#line 110
{
  /* atomic removed: atomic calls only */

  {
    Atm128Adcsra_t oldSr = HplAtm128AdcP$HplAtm128Adc$getAdcsra();
#line 114
    Atm128Adcsra_t newSr;





    newSr = oldSr;
    newSr.aden = FALSE;
    newSr.adif = TRUE;
    newSr.adie = FALSE;

    HplAtm128AdcP$HplAtm128Adc$setAdcsra(newSr);
    newSr.adsc = FALSE;
    HplAtm128AdcP$HplAtm128Adc$setAdcsra(newSr);
    newSr.aden = TRUE;
    HplAtm128AdcP$HplAtm128Adc$setAdcsra(newSr);

    {
      unsigned char __nesc_temp = 
#line 131
      oldSr.adif || oldSr.adsc;

#line 131
      return __nesc_temp;
    }
  }
}

# 141 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static   bool Atm128AdcP$HplAtm128Adc$cancel(void){
#line 141
  unsigned char result;
#line 141

#line 141
  result = HplAtm128AdcP$HplAtm128Adc$cancel();
#line 141

#line 141
  return result;
#line 141
}
#line 141
# 242 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline    bool Atm128AdcP$Atm128AdcMultiple$default$dataReady(uint16_t data, bool precise, uint8_t channel, 
uint8_t *newChannel, uint8_t *newRefVoltage)
#line 243
{
  return FALSE;
}

# 110 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
inline static   bool Atm128AdcP$Atm128AdcMultiple$dataReady(uint16_t arg_0x7e4a1a68, bool arg_0x7e4a1bf0, uint8_t arg_0x7e4a1d78, uint8_t *arg_0x7e4a0010, uint8_t *arg_0x7e4a01c0){
#line 110
  unsigned char result;
#line 110

#line 110
  result = Atm128AdcP$Atm128AdcMultiple$default$dataReady(arg_0x7e4a1a68, arg_0x7e4a1bf0, arg_0x7e4a1d78, arg_0x7e4a0010, arg_0x7e4a01c0);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 150 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline    void AdcP$ReadNow$default$readDone(uint8_t c, error_t e, uint16_t d)
#line 150
{
}

# 65 "/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
inline static   void AdcP$ReadNow$readDone(uint8_t arg_0x7e411440, error_t arg_0x7e4b5b10, AdcP$ReadNow$val_t arg_0x7e4b5c98){
#line 65
    AdcP$ReadNow$default$readDone(arg_0x7e411440, arg_0x7e4b5b10, arg_0x7e4b5c98);
#line 65
}
#line 65
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t AdcP$acquiredData$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(AdcP$acquiredData);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 108 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline   void AdcP$Atm128AdcSingle$dataReady(uint16_t data, bool precise)
#line 108
{
  switch (AdcP$state) 
    {
      case AdcP$ACQUIRE_DATA: 
        if (!precise) {
          AdcP$sample();
          }
        else {
            AdcP$val = data;
            AdcP$acquiredData$postTask();
          }
      break;

      case AdcP$ACQUIRE_DATA_NOW: 
        if (!precise) {
          AdcP$sample();
          }
        else {
            AdcP$state = AdcP$IDLE;
            AdcP$ReadNow$readDone(AdcP$client, SUCCESS, data);
          }
      break;

      default: 
        break;
    }
}

# 72 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
inline static   void Atm128AdcP$Atm128AdcSingle$dataReady(uint16_t arg_0x7e4a78b8, bool arg_0x7e4a7a40){
#line 72
  AdcP$Atm128AdcSingle$dataReady(arg_0x7e4a78b8, arg_0x7e4a7a40);
#line 72
}
#line 72
# 80 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
static inline   void HplAtm128AdcP$HplAtm128Adc$disableInterruption(void)
#line 80
{
#line 80
  * (volatile uint8_t *)(0x06 + 0x20) &= ~(1 << 3);
}

# 86 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static   void Atm128AdcP$HplAtm128Adc$disableInterruption(void){
#line 86
  HplAtm128AdcP$HplAtm128Adc$disableInterruption();
#line 86
}
#line 86
# 124 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
static inline   void Atm128AdcP$HplAtm128Adc$dataReady(uint16_t data)
#line 124
{
  bool precise;
#line 125
  bool multiple;
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      channel = Atm128AdcP$f.channel;
      precise = Atm128AdcP$f.precise;
      multiple = Atm128AdcP$f.multiple;
    }
#line 133
    __nesc_atomic_end(__nesc_atomic); }

  if (!multiple) 
    {


      Atm128AdcP$HplAtm128Adc$disableInterruption();
      Atm128AdcP$Atm128AdcSingle$dataReady(data, precise);
    }
  else 
    {







      bool cont;
      uint8_t nextChannel;
#line 152
      uint8_t nextVoltage;
      Atm128Admux_t admux;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          admux = Atm128AdcP$HplAtm128Adc$getAdmux();
          nextVoltage = admux.refs;
          nextChannel = admux.mux;
        }
#line 160
        __nesc_atomic_end(__nesc_atomic); }

      cont = Atm128AdcP$Atm128AdcMultiple$dataReady(data, precise, channel, 
      &nextChannel, &nextVoltage);
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        if (cont) 
          {



            admux.refs = nextVoltage;
            admux.mux = nextChannel;
            Atm128AdcP$HplAtm128Adc$setAdmux(admux);

            Atm128AdcP$f = Atm128AdcP$nextF;
            Atm128AdcP$nextF.channel = nextChannel;
            Atm128AdcP$nextF.precise = Atm128AdcP$isPrecise(admux, nextChannel, nextVoltage);
          }
        else {
          Atm128AdcP$HplAtm128Adc$cancel();
          }
#line 180
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 147 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
inline static   void HplAtm128AdcP$HplAtm128Adc$dataReady(uint16_t arg_0x7e48a120){
#line 147
  Atm128AdcP$HplAtm128Adc$dataReady(arg_0x7e48a120);
#line 147
}
#line 147
# 112 "/opt/tinyos-2.x/tos/platforms/zigbex/SCSuartDBGM.nc"
static inline    void SCSuartDBGM$SCSuartDBGRecv$default$UARTRecv(uint8_t recv_Char)
#line 112
{
#line 112
  ;
}

# 30 "/opt/tinyos-2.x/tos/platforms/zigbex/SCSuartDBGRecv.nc"
inline static   void SCSuartDBGM$SCSuartDBGRecv$UARTRecv(uint8_t arg_0x7e2e28f8){
#line 30
  SCSuartDBGM$SCSuartDBGRecv$default$UARTRecv(arg_0x7e2e28f8);
#line 30
}
#line 30
# 68 "/opt/tinyos-2.x/tos/platforms/zigbex/SCSuartDBGM.nc"
static inline   void SCSuartDBGM$HPLUART$rxDone(uint8_t data)
#line 68
{
  SCSuartDBGM$SCSuartDBGRecv$UARTRecv(data);
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   void HplAtm128UartP$HplUart0$rxDone(uint8_t arg_0x7e38d6b0){
#line 49
  SCSuartDBGM$HPLUART$rxDone(arg_0x7e38d6b0);
#line 49
}
#line 49
#line 46
inline static   void SCSuartDBGM$HPLUART$tx(uint8_t arg_0x7e38fbc8){
#line 46
  HplAtm128UartP$HplUart0$tx(arg_0x7e38fbc8);
#line 46
}
#line 46
# 72 "/opt/tinyos-2.x/tos/platforms/zigbex/SCSuartDBGM.nc"
static inline   void SCSuartDBGM$HPLUART$txDone(void)
#line 72
{
  SCSuartDBGM$buff_start++;

  if (SCSuartDBGM$buff_start > 127 - 1) {
    SCSuartDBGM$buff_start = 0;
    }
  if (SCSuartDBGM$buff_end > 127 - 1) {
    SCSuartDBGM$buff_end = 0;
    }
  if (SCSuartDBGM$buff_start != SCSuartDBGM$buff_end) 
    {
      SCSuartDBGM$HPLUART$tx(SCSuartDBGM$str_buff[SCSuartDBGM$buff_start]);
    }
  else {
      SCSuartDBGM$state = 0;
    }
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   void HplAtm128UartP$HplUart0$txDone(void){
#line 47
  SCSuartDBGM$HPLUART$txDone();
#line 47
}
#line 47
# 175 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
static inline   void InteractionM$CommunicationWithOPT$parsing_longDT(uint8_t *RecvMsg)
#line 175
{
  longData_struct_t *pack = (longData_struct_t *)RecvMsg;

#line 177
  InteractionM$Return_App_Size = 2;

  InteractionM$MyAppPack->AppType = InteractionM$MyAppType;
  InteractionM$MyAppPack->OptType = InteractionM$MyOptType;

  if (InteractionM$MyOptType == 0x0D) {
      InteractionM$C328_Restart_Flag = 0;
      InteractionM$C328_Reset_Timer_Check = 0xFF;

      sprintf(InteractionM$IC_DBG_buff, "%d parsing_longDT:%d\r\n", TOS_NODE_ID, pack->subCmd1);
      InteractionM$SCSuartDBG$UARTSend(InteractionM$IC_DBG_buff, strlen(InteractionM$IC_DBG_buff));

      if (pack->subCmd1 == 0xf0) {
          InteractionM$Seq_For_LongData = 0;
        }
      else {
        if ((
#line 192
        pack->data[0] == 0x0A && pack->data[1] == 0xAA)
         || (pack->data[0] == 0xAA && pack->data[1] == 0x0A)) {

            InteractionM$SetC327_Check_Value(4);
          }
        else {
            InteractionM$Seq_For_LongData = pack->subCmd1 + 1;
          }
        }
    }
  InteractionM$MyAppPack->AppData.message.dataLength = pack->dataLength;
  memcpy(InteractionM$MyAppPack->AppData.message.Msg_Data, pack->data, pack->dataLength);

  InteractionM$Return_App_Size += pack->dataLength + 1;
  InteractionM$TaskGetSensorDataDone$postTask();
}

# 32 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/CommunicationWithOPT.nc"
inline static   void CommunicationWithOPTM$CommunicationWithOPT$parsing_longDT(uint8_t *arg_0x7e7426b8){
#line 32
  InteractionM$CommunicationWithOPT$parsing_longDT(arg_0x7e7426b8);
#line 32
}
#line 32
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t InteractionM$Event_Urgency_Data$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(InteractionM$Event_Urgency_Data);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 138 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
static inline   void InteractionM$CommunicationWithOPT$parsing_control(uint8_t *RecvMsg)
#line 138
{
  configuration_sampling_struct_t *pack = (configuration_sampling_struct_t *)RecvMsg;

#line 140
  InteractionM$Return_App_Size = 2;

  if (InteractionM$MyOptType == 0x0D) {
      if (pack->subCmd1 == 0x13) {
          sprintf(InteractionM$IC_DBG_buff, "%d recv SUBCMD1_FAIL\r\n", TOS_NODE_ID);
          InteractionM$SCSuartDBG$UARTSend(InteractionM$IC_DBG_buff, strlen(InteractionM$IC_DBG_buff));
        }
    }
  else {
#line 148
    if (InteractionM$MyOptType == 0x09) {
        memcpy((uint8_t *)&InteractionM$Urgency_MSG, RecvMsg, sizeof(configuration_sampling_struct_t ));
        InteractionM$Event_Urgency_Data$postTask();
      }
    else {
#line 152
      if ((InteractionM$MyOptType == 0x0E || InteractionM$MyOptType == 0x04) || InteractionM$MyOptType == 0x05) {
          InteractionM$MyAppPack->AppType = InteractionM$MyAppType;
          InteractionM$MyAppPack->OptType = InteractionM$MyOptType;

          InteractionM$MyAppPack->AppData.sensor.SamplingInfo = InteractionM$MySampleI;
          InteractionM$MyAppPack->AppData.sensor.Sdata.ADC_data[0] = pack->ConfigData.SensorData[0];
          InteractionM$MyAppPack->AppData.sensor.Sdata.ADC_data[1] = pack->ConfigData.SensorData[1];
          InteractionM$MyAppPack->AppData.sensor.Sdata.ADC_data[2] = pack->ConfigData.SensorData[2];
          InteractionM$MyAppPack->AppData.sensor.Sdata.ADC_data[3] = pack->ConfigData.SensorData[3];
          InteractionM$MyAppPack->AppData.sensor.Sdata.ADC_data[4] = pack->ConfigData.SensorData[4];
          InteractionM$MyAppPack->AppData.sensor.Sdata.ADC_data[5] = pack->ConfigData.SensorData[5];

          InteractionM$Return_App_Size += sizeof(Sensor_data_t );

          sprintf(InteractionM$IC_DBG_buff, "%d recv parsing_control\r\n", TOS_NODE_ID);
          InteractionM$SCSuartDBG$UARTSend(InteractionM$IC_DBG_buff, strlen(InteractionM$IC_DBG_buff));

          InteractionM$TaskGetSensorDataDone$postTask();
        }
      }
    }
}

# 31 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/CommunicationWithOPT.nc"
inline static   void CommunicationWithOPTM$CommunicationWithOPT$parsing_control(uint8_t *arg_0x7e7421f0){
#line 31
  InteractionM$CommunicationWithOPT$parsing_control(arg_0x7e7421f0);
#line 31
}
#line 31
# 114 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
static inline   void InteractionM$CommunicationWithOPT$parsing_sensor(uint8_t *RecvMsg)
#line 114
{
  configuration_sampling_struct_t *pack = (configuration_sampling_struct_t *)RecvMsg;

#line 116
  InteractionM$Return_App_Size = 2;

  InteractionM$MyAppPack->AppType = InteractionM$MyAppType;
  InteractionM$MyAppPack->OptType = InteractionM$MyOptType;

  InteractionM$MyAppPack->AppData.sensor.SamplingInfo = InteractionM$MySampleI;
  InteractionM$MyAppPack->AppData.sensor.Sdata.ADC_data[0] = pack->ConfigData.SensorData[0];
  InteractionM$MyAppPack->AppData.sensor.Sdata.ADC_data[1] = pack->ConfigData.SensorData[1];
  InteractionM$MyAppPack->AppData.sensor.Sdata.ADC_data[2] = pack->ConfigData.SensorData[2];
  InteractionM$MyAppPack->AppData.sensor.Sdata.ADC_data[3] = pack->ConfigData.SensorData[3];
  InteractionM$MyAppPack->AppData.sensor.Sdata.ADC_data[4] = pack->ConfigData.SensorData[4];
  InteractionM$MyAppPack->AppData.sensor.Sdata.ADC_data[5] = pack->ConfigData.SensorData[5];

  InteractionM$Return_App_Size += sizeof(Sensor_data_t );
  InteractionM$TaskGetSensorDataDone$postTask();
}

# 30 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/CommunicationWithOPT.nc"
inline static   void CommunicationWithOPTM$CommunicationWithOPT$parsing_sensor(uint8_t *arg_0x7e743d08){
#line 30
  InteractionM$CommunicationWithOPT$parsing_sensor(arg_0x7e743d08);
#line 30
}
#line 30
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t InteractionM$Set_C328_Restart_Timer_START$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(InteractionM$Set_C328_Restart_Timer_START);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 86 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
static inline   void InteractionM$CommunicationWithOPT$parsing_config(uint8_t *RecvMsg)
#line 86
{
  configuration_sampling_struct_t *pack = (configuration_sampling_struct_t *)RecvMsg;

  InteractionM$MyOptType = pack->optType;
  if ((InteractionM$MyOptType == 0x06 || InteractionM$MyOptType == 0x09) || InteractionM$MyOptType == 0x0D) {
      InteractionM$MyAppType = 0x0A;
      if (InteractionM$MyOptType == 0x0D) {
          InteractionM$C328_Reset_Timer_Check = 0xFF;
          InteractionM$C328_Reset_Timer_Counter = 0;
          InteractionM$Set_C328_Restart_Timer_START$postTask();
        }
    }
  else {
      InteractionM$MyAppType = 0x02;
    }
  InteractionM$TaskStartDoneConfiguration$postTask();
}

# 29 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Header/CommunicationWithOPT.nc"
inline static   void CommunicationWithOPTM$CommunicationWithOPT$parsing_config(uint8_t *arg_0x7e743840){
#line 29
  InteractionM$CommunicationWithOPT$parsing_config(arg_0x7e743840);
#line 29
}
#line 29
# 163 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/CommunicationWithOPTM.nc"
static inline   void CommunicationWithOPTM$HPLUART$rxDone(uint8_t data)
#line 163
{






  if (CommunicationWithOPTM$RecvStartFlag == 0) {
      if (data == 0x7E) {
          CommunicationWithOPTM$RecvStartFlag = 1;
          CommunicationWithOPTM$R_index = 0;
          CommunicationWithOPTM$Uart_R_buff[CommunicationWithOPTM$R_index++] = data;
        }
    }
  else 
#line 176
    {
      if (CommunicationWithOPTM$R_index < 3 && data == 0x7E) {

          CommunicationWithOPTM$RecvStartFlag = 1;
          CommunicationWithOPTM$R_index = 0;
          CommunicationWithOPTM$Uart_R_buff[CommunicationWithOPTM$R_index++] = data;
          return;
        }

      CommunicationWithOPTM$Uart_R_buff[CommunicationWithOPTM$R_index++] = data;

      if (CommunicationWithOPTM$Uart_R_buff[1] == 0x03) {
          if (CommunicationWithOPTM$R_index == CommunicationWithOPTM$CSST_Size) {
              CommunicationWithOPTM$RecvStartFlag = 0;
              if (data == 0x7E) {



                  CommunicationWithOPTM$CommunicationWithOPT$parsing_config(CommunicationWithOPTM$Uart_R_buff);
                }
              else 
#line 195
                {
                  CommunicationWithOPTM$RecvStartFlag = 0;
                }
            }
          else {
#line 199
            if (CommunicationWithOPTM$CSST_Size - 2 < CommunicationWithOPTM$R_index && data == 0x7E) {
                CommunicationWithOPTM$RecvStartFlag = 0;
              }
            }
        }
      else {
#line 203
        if (CommunicationWithOPTM$Uart_R_buff[1] == 0x02) {
            if (CommunicationWithOPTM$R_index == CommunicationWithOPTM$CSST_Size) {
                CommunicationWithOPTM$RecvStartFlag = 0;
                if (data == 0x7E) {



                    CommunicationWithOPTM$CommunicationWithOPT$parsing_sensor(CommunicationWithOPTM$Uart_R_buff);
                  }
                else 
#line 211
                  {
                    CommunicationWithOPTM$RecvStartFlag = 0;
                  }
              }
            else {
#line 215
              if (CommunicationWithOPTM$CSST_Size - 2 < CommunicationWithOPTM$R_index && data == 0x7E) {
                  CommunicationWithOPTM$RecvStartFlag = 0;
                }
              }
          }
        else {
#line 219
          if (CommunicationWithOPTM$Uart_R_buff[1] == 0x09) {
              if (CommunicationWithOPTM$R_index == CommunicationWithOPTM$CSST_Size) {
                  CommunicationWithOPTM$RecvStartFlag = 0;
                  if (data == 0x7E) {



                      CommunicationWithOPTM$CommunicationWithOPT$parsing_control(CommunicationWithOPTM$Uart_R_buff);
                    }
                  else 
#line 227
                    {
                      CommunicationWithOPTM$RecvStartFlag = 0;
                    }
                }
              else {
#line 231
                if (CommunicationWithOPTM$CSST_Size - 2 < CommunicationWithOPTM$R_index && data == 0x7E) {
                    CommunicationWithOPTM$RecvStartFlag = 0;
                  }
                }
            }
          else {
#line 235
            if (CommunicationWithOPTM$Uart_R_buff[1] == 0x01 || CommunicationWithOPTM$Uart_R_buff[1] == 0x0A) {
                if (CommunicationWithOPTM$R_index == CommunicationWithOPTM$LDST_Size) {
                    CommunicationWithOPTM$RecvStartFlag = 0;
                    if (data == 0x7E) {





                        CommunicationWithOPTM$CommunicationWithOPT$parsing_longDT(CommunicationWithOPTM$Uart_R_buff);
                      }
                    else 
#line 245
                      {
                        CommunicationWithOPTM$RecvStartFlag = 0;
                      }
                  }
                else {
#line 249
                  if (CommunicationWithOPTM$LDST_Size - 2 < CommunicationWithOPTM$R_index && data == 0x7E) {
                      CommunicationWithOPTM$RecvStartFlag = 0;
                    }
                  }
              }
            else 
#line 252
              {
              }
            }
          }
        }
      if (CommunicationWithOPTM$R_index > 96) {
        CommunicationWithOPTM$RecvStartFlag = 0;
        }
    }
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   void HplAtm128UartP$HplUart1$rxDone(uint8_t arg_0x7e38d6b0){
#line 49
  CommunicationWithOPTM$HPLUART$rxDone(arg_0x7e38d6b0);
#line 49
}
#line 49
#line 46
inline static   void CommunicationWithOPTM$HPLUART$tx(uint8_t arg_0x7e38fbc8){
#line 46
  HplAtm128UartP$HplUart1$tx(arg_0x7e38fbc8);
#line 46
}
#line 46
# 281 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/CommunicationWithOPTM.nc"
static inline   void CommunicationWithOPTM$HPLUART$txDone(void)
#line 281
{
  CommunicationWithOPTM$buff_start++;

  if (CommunicationWithOPTM$buff_start > 96 - 1) {
    CommunicationWithOPTM$buff_start = 0;
    }
  if (CommunicationWithOPTM$buff_end > 96 - 1) {
    CommunicationWithOPTM$buff_end = 0;
    }
  if (CommunicationWithOPTM$buff_start != CommunicationWithOPTM$buff_end) {
      CommunicationWithOPTM$HPLUART$tx(CommunicationWithOPTM$str_buff[CommunicationWithOPTM$buff_start]);
    }
  else {
      CommunicationWithOPTM$state = 0;
    }
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   void HplAtm128UartP$HplUart1$txDone(void){
#line 47
  CommunicationWithOPTM$HPLUART$txDone();
#line 47
}
#line 47
# 52 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
  int main(void)
#line 52
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {






      RealMainP$Scheduler$init();





      RealMainP$PlatformInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;





      RealMainP$SoftwareInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;
    }
#line 76
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP$Boot$booted();


  RealMainP$Scheduler$taskLoop();




  return -1;
}

# 123 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static  bool SchedulerBasicP$Scheduler$runNextTask(void)
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 127
  {
    nextTask = SchedulerBasicP$popTask();
    if (nextTask == SchedulerBasicP$NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 131
          FALSE;

#line 131
          return __nesc_temp;
        }
      }
  }
#line 134
  SchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}

#line 164
static   void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x7f062030){
#line 64
  switch (arg_0x7f062030) {
#line 64
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired:
#line 64
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer:
#line 64
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask();
#line 64
      break;
#line 64
    case LCDSetterM$TryToConfigure:
#line 64
      LCDSetterM$TryToConfigure$runTask();
#line 64
      break;
#line 64
    case LCDSetterM$TryToSetTimer:
#line 64
      LCDSetterM$TryToSetTimer$runTask();
#line 64
      break;
#line 64
    case InteractionM$TaskStartDoneConfiguration:
#line 64
      InteractionM$TaskStartDoneConfiguration$runTask();
#line 64
      break;
#line 64
    case InteractionM$TaskGetSensorDataDone:
#line 64
      InteractionM$TaskGetSensorDataDone$runTask();
#line 64
      break;
#line 64
    case InteractionM$Set_C328_Restart_Timer_START:
#line 64
      InteractionM$Set_C328_Restart_Timer_START$runTask();
#line 64
      break;
#line 64
    case InteractionM$Event_Urgency_Data:
#line 64
      InteractionM$Event_Urgency_Data$runTask();
#line 64
      break;
#line 64
    case InteractionM$TryToGetSensorData:
#line 64
      InteractionM$TryToGetSensorData$runTask();
#line 64
      break;
#line 64
    case InteractionM$ProcessCMD:
#line 64
      InteractionM$ProcessCMD$runTask();
#line 64
      break;
#line 64
    case InteractionM$SendBasicSensor:
#line 64
      InteractionM$SendBasicSensor$runTask();
#line 64
      break;
#line 64
    case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readSensor:
#line 64
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readSensor$runTask();
#line 64
      break;
#line 64
    case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone:
#line 64
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone$runTask();
#line 64
      break;
#line 64
    case HplSensirionSht11P$stopTask:
#line 64
      HplSensirionSht11P$stopTask$runTask();
#line 64
      break;
#line 64
    case /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask:
#line 64
      /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask$runTask();
#line 64
      break;
#line 64
    case /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$startTask:
#line 64
      /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$startTask$runTask();
#line 64
      break;
#line 64
    case /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopTask:
#line 64
      /*HplSensirionSht11C.SplitControlPowerManagerC.PowerManager*/PowerManagerP$0$stopTask$runTask();
#line 64
      break;
#line 64
    case /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask:
#line 64
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask$runTask();
#line 64
      break;
#line 64
    case AdcP$acquiredData:
#line 64
      AdcP$acquiredData$runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP$TaskBasic$default$runTask(arg_0x7f062030);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 106 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$release(uint8_t id)
#line 106
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 107
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$RES_BUSY && /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$resId == id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Queue$isEmpty() == FALSE) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$reqResId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Queue$dequeue();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$RES_GRANTING;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$grantedTask$postTask();
            }
          else {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$CONTROLLER_ID;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$RES_CONTROLLED;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceController$granted();
            }
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceConfigure$unconfigure(id);
        }
    }
#line 121
    __nesc_atomic_end(__nesc_atomic); }
  return FAIL;
}

# 62 "/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static   bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(resource_client_id_t id)
#line 62
{
  return /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[id / 8] & (1 << id % 8);
}

# 159 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static   error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 161
    {
#line 161
      {
        unsigned char __nesc_temp = 
#line 161
        SchedulerBasicP$pushTask(id) ? SUCCESS : EBUSY;

        {
#line 161
          __nesc_atomic_end(__nesc_atomic); 
#line 161
          return __nesc_temp;
        }
      }
    }
#line 164
    __nesc_atomic_end(__nesc_atomic); }
}

# 75 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Resource$request(uint8_t id)
#line 75
{
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceRequested$requested(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 77
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$RES_CONTROLLED) {
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$RES_GRANTING;
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 82
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$Queue$enqueue(id);

          {
#line 82
            __nesc_atomic_end(__nesc_atomic); 
#line 82
            return __nesc_temp;
          }
        }
    }
#line 85
    __nesc_atomic_end(__nesc_atomic); }
#line 84
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$1$ResourceController$requested();
  return SUCCESS;
}

# 82 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static void AdcP$sample(void)
#line 82
{
  AdcP$Atm128AdcSingle$getData(AdcP$channel(), AdcP$refVoltage(), TRUE, AdcP$prescaler());
}

# 132 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

#line 135
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 92 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmCounterC.nc"
static   /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$get(void)
{
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type rv = 0;

#line 95
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$upper_count_type high = /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_upper;
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_size_type low = /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$get();

#line 99
      if (/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$isOverflowPending()) 
        {






          high++;
          low = /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$CounterFrom$get();
        }
      {
        /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type high_to = high;
        /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type low_to = low >> /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$LOW_SHIFT_RIGHT;

#line 113
        rv = (high_to << /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 115
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 121 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
static  error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureHumidity(uint8_t client)
#line 121
{
  if (!/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$on) {
#line 122
      return EOFF;
    }
#line 123
  if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy) {
#line 123
      return EBUSY;
    }
  else 
#line 123
    {
#line 123
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = TRUE;
    }
#line 124
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$cmd = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_MEASURE_HUMIDITY;
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$currentClient = client;
  return /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$performCommand();
}

#line 149
static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$performCommand(void)
#line 149
{

  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$initPins();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$resetDevice();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$transmissionStart();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$cmd &= 0x1F;
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$sendCommand(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$cmd);

  if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$waitForResponse() != SUCCESS) {
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = FALSE;
      return FAIL;
    }

  switch (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$cmd) {

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_SOFT_RESET: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$startOneShot(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$TIMEOUT_RESET);
      break;

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_MEASURE_TEMPERATURE: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$enableInterrupt();

      if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$status & SHT11_STATUS_LOW_RES_BIT) {
          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$startOneShot(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$TIMEOUT_12BIT);
        }
      else 
#line 173
        {
          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$startOneShot(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$TIMEOUT_14BIT);
        }

      break;

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_MEASURE_HUMIDITY: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$enableInterrupt();

      if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$status & SHT11_STATUS_LOW_RES_BIT) {
          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$startOneShot(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$TIMEOUT_8BIT);
        }
      else 
#line 184
        {
          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$startOneShot(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$TIMEOUT_12BIT);
        }

      break;

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_READ_STATUS: 
        {
          uint8_t tempStatus;
          uint8_t crc;

          tempStatus = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readByte();
          crc = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readByte();
          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$endTransmission();

          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$status = tempStatus;

          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone$postTask();
        }

      case /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_WRITE_STATUS: 
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$writeByte(/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$newStatus);

      if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$waitForResponse() != SUCCESS) {
          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$writeFail = TRUE;
        }
      else 
#line 209
        {
          /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$status = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$newStatus;
        }

      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$signalStatusDone$postTask();
    }


  return SUCCESS;
}

#line 255
static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$writeByte(uint8_t byte)
#line 255
{
  uint8_t i;

#line 257
  for (i = 0; i < 8; i++) {
      if (byte & 0x80) {
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set();
        }
      else {
#line 261
        /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$clr();
        }
#line 262
      byte = byte << 1;
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$set();
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
    }
}

static error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$waitForResponse(void)
#line 268
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeInput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$set();
  if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$get()) {


      return FAIL;
    }
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$Timer$startOneShot(uint32_t arg_0x7ef80068){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(11U, arg_0x7ef80068);
#line 62
}
#line 62
# 15 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static error_t /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$enable(bool rising)
#line 15
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 16
    {
      /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable();
      /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear();
      /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(rising);
      /*HplSensirionSht11C.InterruptDATAC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable();
    }
#line 21
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 355 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
static uint8_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$readByte(void)
#line 355
{
  uint8_t byte = 0;
  uint8_t i;

  for (i = 0; i < 8; i++) {
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$set();
      if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$get()) {
        byte |= 1;
        }
#line 363
      if (i != 7) {
        byte = byte << 1;
        }
#line 365
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
    }

  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$ack();
  return byte;
}










static void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$endTransmission(void)
#line 381
{
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$makeOutput();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$DATA$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$set();
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CLOCK$clr();
}

# 106 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$release(uint8_t id)
#line 106
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 107
    {
      if (/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$state == /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$RES_BUSY && /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$resId == id) {
          if (/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Queue$isEmpty() == FALSE) {
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$reqResId = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Queue$dequeue();
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$state = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$RES_GRANTING;
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$grantedTask$postTask();
            }
          else {
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$resId = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$CONTROLLER_ID;
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$state = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED;
              /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceController$granted();
            }
          /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(id);
        }
    }
#line 121
    __nesc_atomic_end(__nesc_atomic); }
  return FAIL;
}

# 58 "TempSensorM.nc"
static  void TempSensorM$Read_Humidity$readDone(error_t result, uint16_t data)
#line 58
{
  if (result == SUCCESS) 
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 61
        TempSensorM$T_humi = data;
#line 61
        __nesc_atomic_end(__nesc_atomic); }
      TempSensorM$calc_SHT11(TempSensorM$T_humi, TempSensorM$T_temp);
      TempSensorM$TempSensor$done(TempSensorM$mytemp, TempSensorM$myhumi);
    }
  else 
    {
      TempSensorM$Read_Temp$read();
    }
}

# 52 "SerialAppM.nc"
static float *SerialAppM$getValues(uint16_t newValue)
#line 52
{
  static uint8_t con_i = 0;
  static float ret_avg = 0;
  static float ret_std = 0;
  static float delta = 0;
  static float values[3];
  static float m2 = 0;
  float delta2;

  delta = (float )newValue - ret_avg;
  con_i++;
  ret_avg += delta / con_i;
  if (con_i == 1) {
    }
  else 
#line 65
    {

      delta2 = (float )newValue - ret_avg;
      m2 += delta * delta2;
      ret_std = sqrt(m2 / (con_i - 1));
    }

  values[0] = (float )newValue;
  values[1] = ret_avg;
  values[2] = ret_std;

  return values;
}

# 75 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static   error_t /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Resource$request(uint8_t id)
#line 75
{
  /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 77
    {
      if (/*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$state == /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED) {
          /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$state = /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$RES_GRANTING;
          /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 82
          /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$Queue$enqueue(id);

          {
#line 82
            __nesc_atomic_end(__nesc_atomic); 
#line 82
            return __nesc_temp;
          }
        }
    }
#line 85
    __nesc_atomic_end(__nesc_atomic); }
#line 84
  /*HplSensirionSht11C.Arbiter.Arbiter*/ArbiterP$0$ResourceController$requested();
  return SUCCESS;
}

# 113 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
static  error_t /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureTemperature(uint8_t client)
#line 113
{
  if (!/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$on) {
#line 114
      return EOFF;
    }
#line 115
  if (/*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy) {
#line 115
      return EBUSY;
    }
  else 
#line 115
    {
#line 115
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$busy = TRUE;
    }
#line 116
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$cmd = /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$CMD_MEASURE_TEMPERATURE;
  /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$currentClient = client;
  return /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$performCommand();
}

# 46 "TempSensorM.nc"
static  void TempSensorM$Read_Temp$readDone(error_t result, uint16_t data)
#line 46
{
  if (result == SUCCESS) 
    {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 49
        TempSensorM$T_temp = data;
#line 49
        __nesc_atomic_end(__nesc_atomic); }
      TempSensorM$Read_Humidity$read();
    }
  else 
    {
      TempSensorM$Read_Temp$read();
    }
}

# 407 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$measureTemperatureDone(uint8_t client, error_t result, uint16_t val)
#line 407
{
}

# 69 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureTemperatureDone(uint8_t arg_0x7e657200, error_t arg_0x7e6890f8, uint16_t arg_0x7e689288){
#line 69
  switch (arg_0x7e657200) {
#line 69
    case /*InteractionC.SensirionSht11C*/SensirionSht11C$0$TEMP_KEY:
#line 69
      /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureTemperatureDone(arg_0x7e6890f8, arg_0x7e689288);
#line 69
      break;
#line 69
    case /*InteractionC.SensirionSht11C*/SensirionSht11C$0$HUM_KEY:
#line 69
      /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureTemperatureDone(arg_0x7e6890f8, arg_0x7e689288);
#line 69
      break;
#line 69
    case /*TempSensorC.Sensor*/SensirionSht11C$1$TEMP_KEY:
#line 69
      /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$measureTemperatureDone(arg_0x7e6890f8, arg_0x7e689288);
#line 69
      break;
#line 69
    case /*TempSensorC.Sensor*/SensirionSht11C$1$HUM_KEY:
#line 69
      /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$measureTemperatureDone(arg_0x7e6890f8, arg_0x7e689288);
#line 69
      break;
#line 69
    default:
#line 69
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$measureTemperatureDone(arg_0x7e657200, arg_0x7e6890f8, arg_0x7e689288);
#line 69
      break;
#line 69
    }
#line 69
}
#line 69
# 408 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11LogicP.nc"
static   void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$measureHumidityDone(uint8_t client, error_t result, uint16_t val)
#line 408
{
}

# 84 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/sht11/SensirionSht11.nc"
static  void /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$measureHumidityDone(uint8_t arg_0x7e657200, error_t arg_0x7e689b70, uint16_t arg_0x7e689d00){
#line 84
  switch (arg_0x7e657200) {
#line 84
    case /*InteractionC.SensirionSht11C*/SensirionSht11C$0$TEMP_KEY:
#line 84
      /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Temp$measureHumidityDone(arg_0x7e689b70, arg_0x7e689d00);
#line 84
      break;
#line 84
    case /*InteractionC.SensirionSht11C*/SensirionSht11C$0$HUM_KEY:
#line 84
      /*InteractionC.SensirionSht11C.SensirionSht11ReaderP*/SensirionSht11ReaderP$0$Sht11Hum$measureHumidityDone(arg_0x7e689b70, arg_0x7e689d00);
#line 84
      break;
#line 84
    case /*TempSensorC.Sensor*/SensirionSht11C$1$TEMP_KEY:
#line 84
      /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Temp$measureHumidityDone(arg_0x7e689b70, arg_0x7e689d00);
#line 84
      break;
#line 84
    case /*TempSensorC.Sensor*/SensirionSht11C$1$HUM_KEY:
#line 84
      /*TempSensorC.Sensor.SensirionSht11ReaderP*/SensirionSht11ReaderP$1$Sht11Hum$measureHumidityDone(arg_0x7e689b70, arg_0x7e689d00);
#line 84
      break;
#line 84
    default:
#line 84
      /*HalSensirionSht11C.SensirionSht11LogicP*/SensirionSht11LogicP$0$SensirionSht11$default$measureHumidityDone(arg_0x7e657200, arg_0x7e689b70, arg_0x7e689d00);
#line 84
      break;
#line 84
    }
#line 84
}
#line 84
# 115 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/CommunicationWithOPTM.nc"
static  void CommunicationWithOPTM$CommunicationWithOPT$RequestSensorMSG(uint8_t OptType)
#line 115
{
  CommunicationWithOPTM$CSST.stxm = 0x7E;
  CommunicationWithOPTM$CSST.etxm = 0x7E;
  CommunicationWithOPTM$CSST.packetType = 0x02;
  CommunicationWithOPTM$CSST.optType = (uint16_t )OptType;
  CommunicationWithOPTM$CSST.subCmd1 = 0;




  CommunicationWithOPTM$UARTSend((uint8_t *)&CommunicationWithOPTM$CSST, CommunicationWithOPTM$CSST_Size);
}

#line 262
static void CommunicationWithOPTM$UARTSend(uint8_t *data, uint8_t len)
#line 262
{
  uint8_t i;

  if (CommunicationWithOPTM$buff_start > 96 - 1) {
    CommunicationWithOPTM$buff_start = 0;
    }
  for (i = 0; i < len; i++) {
      if (CommunicationWithOPTM$buff_end > 96 - 1) {
        CommunicationWithOPTM$buff_end = 0;
        }
#line 271
      CommunicationWithOPTM$str_buff[CommunicationWithOPTM$buff_end] = data[i];
      CommunicationWithOPTM$buff_end++;
    }

  if (CommunicationWithOPTM$state == 0) {
      CommunicationWithOPTM$state = 1;
      CommunicationWithOPTM$HPLUART$tx(CommunicationWithOPTM$str_buff[CommunicationWithOPTM$buff_start]);
    }
}

# 264 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static   void HplAtm128UartP$HplUart1$tx(uint8_t data)
#line 264
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 265
    {
      * (volatile uint8_t *)0x9C = data;
      * (volatile uint8_t *)0x9B |= 1 << 6;
    }
#line 268
    __nesc_atomic_end(__nesc_atomic); }
}

# 142 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
}

# 97 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/CommunicationWithOPTM.nc"
static  void CommunicationWithOPTM$CommunicationWithOPT$SendControlMSG(uint8_t OptType, uint8_t Cmd1, uint8_t Cmd2, uint8_t *SetDataBuff)
#line 97
{
  CommunicationWithOPTM$CSST.stxm = 0x7E;
  CommunicationWithOPTM$CSST.etxm = 0x7E;
  CommunicationWithOPTM$CSST.packetType = 0x09;
  CommunicationWithOPTM$CSST.optType = (uint16_t )OptType;
  CommunicationWithOPTM$CSST.subCmd1 = Cmd1;
  CommunicationWithOPTM$CSST.subCmd2 = Cmd2;
  memcpy(CommunicationWithOPTM$CSST.ConfigData.GeneralData, SetDataBuff, 16);







  CommunicationWithOPTM$UARTSend((uint8_t *)&CommunicationWithOPTM$CSST, CommunicationWithOPTM$CSST_Size);
}

# 60 "/opt/tinyos-2.x/contrib/OptModuleEX/LIB_Interaction/InteractionM.nc"
static void InteractionM$SetC327_Check_Value(uint8_t check_value)
#line 60
{
  InteractionM$C328_Reset_Timer_Check = InteractionM$C328_Reset_Timer_Counter + check_value;
  if (InteractionM$C328_Reset_Timer_Check == 0xFF) {
    InteractionM$C328_Reset_Timer_Check = 0;
    }
}

# 90 "/opt/tinyos-2.x/tos/platforms/zigbex/SCSuartDBGM.nc"
static   void SCSuartDBGM$SCSuartDBG$UARTSend(uint8_t *data, uint8_t len)
{
  uint8_t i;

  if (SCSuartDBGM$buff_start > 127 - 1) {
    SCSuartDBGM$buff_start = 0;
    }
  for (i = 0; i < len; i++) 
    {
      if (SCSuartDBGM$buff_end > 127 - 1) {
        SCSuartDBGM$buff_end = 0;
        }
#line 101
      SCSuartDBGM$str_buff[SCSuartDBGM$buff_end] = data[i];
      SCSuartDBGM$buff_end++;
    }

  if (SCSuartDBGM$state == 0) 
    {
      SCSuartDBGM$state = 1;
      SCSuartDBGM$HPLUART$tx(SCSuartDBGM$str_buff[SCSuartDBGM$buff_start]);
    }
}

# 167 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static   void HplAtm128UartP$HplUart0$tx(uint8_t data)
#line 167
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 168
    {
      * (volatile uint8_t *)(0x0C + 0x20) = data;
      * (volatile uint8_t *)(0x0B + 0x20) |= 1 << 6;
    }
#line 171
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 79
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(num);
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void LedControllerM$CompleteTimer$startOneShot(uint32_t arg_0x7ef80068){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(4U, arg_0x7ef80068);
#line 62
}
#line 62
# 186 "LedControllerM.nc"
static void LedControllerM$setDigit(uint8_t mask)
#line 186
{
  if (mask & 4) {
#line 187
    LedControllerM$Leds$led0On();
    }
  else {
#line 188
    LedControllerM$Leds$led1Off();
    }
#line 189
  if (mask & 2) {
#line 189
    LedControllerM$Leds$led1On();
    }
  else {
#line 190
    LedControllerM$Leds$led1Off();
    }
#line 191
  if (mask & 1) {
#line 191
    LedControllerM$Leds$led2On();
    }
  else {
#line 192
    LedControllerM$Leds$led2Off();
    }
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void LedControllerM$MorseTimer$startOneShot(uint32_t arg_0x7ef80068){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(5U, arg_0x7ef80068);
#line 62
}
#line 62
# 108 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static   uint8_t LedsP$Leds$get(void)
#line 108
{
  uint8_t rval;

#line 110
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 110
    {
      rval = 0;
      if (LedsP$Led0$get()) {
          rval |= LEDS_LED0;
        }
      if (LedsP$Led1$get()) {
          rval |= LEDS_LED1;
        }
      if (LedsP$Led2$get()) {
          rval |= LEDS_LED2;
        }
    }
#line 121
    __nesc_atomic_end(__nesc_atomic); }
  return rval;
}

# 221 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmCounterC.nc"
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$startAt(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type t0, /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_t0 = t0;
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt = dt;
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$set_alarm();
    }
#line 228
    __nesc_atomic_end(__nesc_atomic); }
}

#line 178
static void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$set_alarm(void)
{
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type now = /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Counter$get();
#line 180
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type elapsed = now - /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_t0;
#line 180
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type remaining;

  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_skip_overflows = 0;
  if (elapsed >= /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt) 
    {
      remaining = 0;
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_t0 += /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt;
      /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt = 0;
    }
  else 
    {
      remaining = /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt - elapsed;




      if (remaining > /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$MAX_DELAY * 2) 
        {
          if (remaining >= /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$MAX_DELAY * 2 * (/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type )256) {
            /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_skip_overflows = 255;
            }
          else {
#line 201
            /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_skip_overflows = remaining / (/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$MAX_DELAY * 2);
            }
#line 202
          return;
        }

      if (remaining > /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$MAX_DELAY) 
        {
          /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_t0 = now + /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$MAX_DELAY;
          /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt = remaining - /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$MAX_DELAY;
          remaining = /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$MAX_DELAY;
        }
      else 
        {
          /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_t0 += /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt;
          /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt = 0;
        }
    }
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$startAt((/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_size_type )now << 0, 
  (/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_size_type )remaining << 0);
}

# 161 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncC.nc"
__attribute((signal))   void __vector_15(void)
#line 161
{
  HplAtm128Timer0AsyncC$stabiliseTimer0();
  HplAtm128Timer0AsyncC$Compare$fired();
}

#line 154
static void HplAtm128Timer0AsyncC$stabiliseTimer0(void)
#line 154
{
  * (volatile uint8_t *)(0x33 + 0x20) = * (volatile uint8_t *)(0x33 + 0x20);
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
}








__attribute((signal))   void __vector_16(void)
#line 167
{
  HplAtm128Timer0AsyncC$stabiliseTimer0();
  HplAtm128Timer0AsyncC$Timer$overflow();
}

# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
__attribute((signal))   void __vector_1(void)
#line 46
{
  HplAtm128InterruptSigP$IntSig0$fired();
}


__attribute((signal))   void __vector_2(void)
#line 51
{
  HplAtm128InterruptSigP$IntSig1$fired();
}


__attribute((signal))   void __vector_3(void)
#line 56
{
  HplAtm128InterruptSigP$IntSig2$fired();
}


__attribute((signal))   void __vector_4(void)
#line 61
{
  HplAtm128InterruptSigP$IntSig3$fired();
}


__attribute((signal))   void __vector_5(void)
#line 66
{
  HplAtm128InterruptSigP$IntSig4$fired();
}


__attribute((signal))   void __vector_6(void)
#line 71
{
  HplAtm128InterruptSigP$IntSig5$fired();
}


__attribute((signal))   void __vector_7(void)
#line 76
{
  HplAtm128InterruptSigP$IntSig6$fired();
}


__attribute((signal))   void __vector_8(void)
#line 81
{
  HplAtm128InterruptSigP$IntSig7$fired();
}

# 101 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128AdcP.nc"
__attribute((signal))   void __vector_21(void)
#line 101
{
  uint16_t data = HplAtm128AdcP$HplAtm128Adc$getValue();

  __nesc_enable_interrupt();
  HplAtm128AdcP$HplAtm128Adc$dataReady(data);
}

# 174 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((signal))   void __vector_18(void)
#line 174
{
  if ((* (volatile uint8_t *)(0x0B + 0x20) & (1 << 7)) != 0) {
      HplAtm128UartP$HplUart0$rxDone(* (volatile uint8_t *)(0x0C + 0x20));
    }
}

__attribute((interrupt))   void __vector_20(void)
#line 180
{
  HplAtm128UartP$HplUart0$txDone();
}

#line 271
__attribute((signal))   void __vector_30(void)
#line 271
{
  if ((* (volatile uint8_t *)0x9B & (1 << 7)) != 0) {
    HplAtm128UartP$HplUart1$rxDone(* (volatile uint8_t *)0x9C);
    }
}

#line 276
__attribute((interrupt))   void __vector_32(void)
#line 276
{
  HplAtm128UartP$HplUart1$txDone();
}

