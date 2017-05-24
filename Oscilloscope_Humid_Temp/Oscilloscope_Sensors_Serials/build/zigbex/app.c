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
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void *source);




static __inline uint8_t __nesc_hton_uint8(void *target, uint8_t value);
#line 264
static __inline uint16_t __nesc_ntoh_uint16(const void *source);




static __inline uint16_t __nesc_hton_uint16(void *target, uint16_t value);
#line 385
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
# 16 "Oscilloscope.h"
enum __nesc_unnamed4296 {


  NREADINGS = 10, 


  DEFAULT_INTERVAL = 256, 

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
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;









#line 42
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;
  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;


#line 52
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;








#line 55
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t tx_power;
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_bool crc;
  nx_bool ack;
  nx_uint16_t time;
} __attribute__((packed)) cc2420_metadata_t;




#line 64
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 81
enum __nesc_unnamed4297 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 28 + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 128
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_SRXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};
# 6 "/opt/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4298 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4299 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 72 "/opt/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4300 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4301 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4302 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 110
#line 98
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 112
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 120
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;
# 49 "/opt/tinyos-2.x/tos/platforms/zigbex/platform_message.h"
#line 46
typedef union message_header {
  cc2420_header_t cc2420;
  serial_header_t serial;
} message_header_t;



#line 51
typedef union message_footer {
  cc2420_footer_t cc2420;
} message_footer_t;



#line 55
typedef union message_metadata {
  cc2420_metadata_t cc2420;
} message_metadata_t;
# 19 "/opt/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 30 "/opt/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4303 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 33 "/opt/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 39 "/opt/tinyos-2.x/tos/chips/atm128/crc.h"
uint16_t crcTable[256] __attribute((__progmem__))  = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline)) ;
# 32 "/opt/tinyos-2.x/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 48
#line 36
typedef union __nesc_unnamed4304 {
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
typedef union __nesc_unnamed4305 {
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

enum __nesc_unnamed4306 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 89
#line 79
typedef union __nesc_unnamed4307 {
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





enum __nesc_unnamed4308 {
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
typedef uint16_t OscilloscopeC$Read$val_t;
typedef TMilli OscilloscopeC$Timer$precision_tag;
enum HilTimerMilliC$__nesc_unnamed4309 {
  HilTimerMilliC$TIMER_COUNT = 1U
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
typedef uint16_t /*OscilloscopeAppC.Sensor.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$val_t;
typedef uint16_t /*OscilloscopeAppC.Sensor.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$val_t;
typedef uint16_t AdcP$Read$val_t;
typedef uint16_t AdcP$ReadNow$val_t;
typedef uint16_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t;
typedef /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$val_t;
enum /*OscilloscopeAppC.Sensor.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$__nesc_unnamed4310 {
  AdcReadClientC$0$ID = 0U, AdcReadClientC$0$HAL_ID = 0U
};
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$size_type;
typedef uint16_t HplAtm128Timer3P$CompareA$size_type;
typedef uint16_t HplAtm128Timer3P$Capture$size_type;
typedef uint16_t HplAtm128Timer3P$CompareB$size_type;
typedef uint16_t HplAtm128Timer3P$CompareC$size_type;
typedef uint16_t HplAtm128Timer3P$Timer$timer_size;
typedef uint16_t /*InitThreeP.InitThree*/Atm128TimerInitC$1$timer_size;
typedef /*InitThreeP.InitThree*/Atm128TimerInitC$1$timer_size /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$timer_size;
typedef TThree /*CounterThree16C.NCounter*/Atm128CounterC$1$frequency_tag;
typedef uint16_t /*CounterThree16C.NCounter*/Atm128CounterC$1$timer_size;
typedef /*CounterThree16C.NCounter*/Atm128CounterC$1$frequency_tag /*CounterThree16C.NCounter*/Atm128CounterC$1$Counter$precision_tag;
typedef /*CounterThree16C.NCounter*/Atm128CounterC$1$timer_size /*CounterThree16C.NCounter*/Atm128CounterC$1$Counter$size_type;
typedef /*CounterThree16C.NCounter*/Atm128CounterC$1$timer_size /*CounterThree16C.NCounter*/Atm128CounterC$1$Timer$timer_size;
typedef TMicro /*CounterMicro32C.Transform32*/TransformCounterC$0$to_precision_tag;
typedef uint32_t /*CounterMicro32C.Transform32*/TransformCounterC$0$to_size_type;
typedef TThree /*CounterMicro32C.Transform32*/TransformCounterC$0$from_precision_tag;
typedef uint16_t /*CounterMicro32C.Transform32*/TransformCounterC$0$from_size_type;
typedef counter_three_overflow_t /*CounterMicro32C.Transform32*/TransformCounterC$0$upper_count_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$0$from_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$0$from_size_type /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$size_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$0$to_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC$0$Counter$precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC$0$to_size_type /*CounterMicro32C.Transform32*/TransformCounterC$0$Counter$size_type;
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void OscilloscopeC$Boot$booted(void);
# 88 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void OscilloscopeC$SerialControl$startDone(error_t arg_0x7e072330);
#line 110
static  void OscilloscopeC$SerialControl$stopDone(error_t arg_0x7e072e68);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void OscilloscopeC$AMSend$sendDone(message_t *arg_0x7dfe0eb8, error_t arg_0x7dfd3068);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void OscilloscopeC$Read$readDone(error_t arg_0x7df91a28, OscilloscopeC$Read$val_t arg_0x7df91bb0);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *OscilloscopeC$Receive$receive(message_t *arg_0x7dfc3ca0, void *arg_0x7dfc3e40, uint8_t arg_0x7dfc2010);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void OscilloscopeC$Timer$fired(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP$Init$init(void);
#line 51
static  error_t MotePlatformP$PlatformInit$init(void);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void);

static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void);



static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void);

static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void);



static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void);



static   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void);
#line 30
static   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP$14$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP$14$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP$14$IO$clr(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t MeasureClockC$Init$init(void);
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static   uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t arg_0x7dee3610);
#line 53
static   uint8_t MeasureClockC$Atm128Calibrate$adcPrescaler(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t SchedulerBasicP$TaskBasic$postTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7e162030);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$default$runTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7e162030);
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
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t LedsP$Init$init(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static   void LedsP$Leds$led0Toggle(void);
#line 72
static   void LedsP$Leds$led1Toggle(void);
# 36 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static   Atm128TimerControl_t HplAtm128Timer0AsyncC$TimerCtrl$getControl(void);







static   Atm128_TIFR_t HplAtm128Timer0AsyncC$TimerCtrl$getInterruptFlag(void);
#line 37
static   void HplAtm128Timer0AsyncC$TimerCtrl$setControl(Atm128TimerControl_t arg_0x7db35448);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t HplAtm128Timer0AsyncC$Init$init(void);
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer0AsyncC$Compare$reset(void);
#line 45
static   void HplAtm128Timer0AsyncC$Compare$set(HplAtm128Timer0AsyncC$Compare$size_type arg_0x7db303d8);










static   void HplAtm128Timer0AsyncC$Compare$start(void);


static   void HplAtm128Timer0AsyncC$Compare$stop(void);
# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   bool HplAtm128Timer0AsyncC$Timer$test(void);
#line 52
static   HplAtm128Timer0AsyncC$Timer$timer_size HplAtm128Timer0AsyncC$Timer$get(void);
#line 95
static   void HplAtm128Timer0AsyncC$Timer$setScale(uint8_t arg_0x7db447e0);
#line 58
static   void HplAtm128Timer0AsyncC$Timer$set(HplAtm128Timer0AsyncC$Timer$timer_size arg_0x7db50b70);










static   void HplAtm128Timer0AsyncC$Timer$start(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Init$init(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$overflow(void);
# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$size_type arg_0x7db72e78, /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$size_type arg_0x7db70030);
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
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$startAt(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$size_type arg_0x7db72e78, /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$size_type arg_0x7db70030);
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
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t arg_0x7dfa3238, uint32_t arg_0x7dfa33c8);
#line 67
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void);
#line 72
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7d9c53a0);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7d9c53a0, 
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x7dfb2010);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t /*OscilloscopeAppC.Sensor.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$read(void);







static  void /*OscilloscopeAppC.Sensor.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$readDone(error_t arg_0x7df91a28, /*OscilloscopeAppC.Sensor.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$val_t arg_0x7df91bb0);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t Atm128AdcP$Init$init(void);
# 110 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static   bool Atm128AdcP$Atm128AdcMultiple$default$dataReady(uint16_t arg_0x7d8f5bb0, bool arg_0x7d8f5d38, uint8_t arg_0x7d8f5ec0, 
uint8_t *arg_0x7d8f40a8, uint8_t *arg_0x7d8f4258);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static   bool Atm128AdcP$Atm128AdcSingle$getData(uint8_t arg_0x7d903a50, uint8_t arg_0x7d903be0, 
bool arg_0x7d903d80, uint8_t arg_0x7d903f10);
# 147 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
static   void Atm128AdcP$HplAtm128Adc$dataReady(uint16_t arg_0x7d8d4208);
# 73 "/opt/tinyos-2.x/tos/interfaces/AsyncStdControl.nc"
static   error_t Atm128AdcP$AsyncStdControl$start(void);








static   error_t Atm128AdcP$AsyncStdControl$stop(void);
# 44 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
static   Atm128Admux_t HplAtm128AdcP$HplAtm128Adc$getAdmux(void);
#line 73
static   void HplAtm128AdcP$HplAtm128Adc$enableAdc(void);
#line 49
static   void HplAtm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t arg_0x7d8e1ec8);
#line 141
static   bool HplAtm128AdcP$HplAtm128Adc$cancel(void);
#line 77
static   void HplAtm128AdcP$HplAtm128Adc$disableAdc(void);








static   void HplAtm128AdcP$HplAtm128Adc$disableInterruption(void);
#line 60
static   void HplAtm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t arg_0x7d8e07c8);
#line 55
static   Atm128Adcsra_t HplAtm128AdcP$HplAtm128Adc$getAdcsra(void);










static   uint16_t HplAtm128AdcP$HplAtm128Adc$getValue(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(resource_client_id_t arg_0x7d850af0);
#line 43
static   bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty(void);








static   bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(resource_client_id_t arg_0x7d850108);







static   resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue(void);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7d834308);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(
# 59 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7d8334d8);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(
# 59 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7d8334d8);
# 56 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceController$release(void);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$release(
# 53 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7d836948);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$request(
# 53 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7d836948);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$default$granted(
# 53 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7d836948);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void);
# 52 "/opt/tinyos-2.x/tos/lib/power/PowerDownCleanup.nc"
static   void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$PowerDownCleanup$default$cleanup(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
static   void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$requested(void);
#line 46
static   void /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$granted(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t AdcP$Read$read(
# 48 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7d7da7d8);
# 65 "/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
static   void AdcP$ReadNow$default$readDone(
# 49 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7d7d9628, 
# 65 "/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
error_t arg_0x7d918b10, AdcP$ReadNow$val_t arg_0x7d918c98);
# 32 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t AdcP$Atm128AdcConfig$default$getRefVoltage(
# 53 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7d7d79c0);
# 25 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t AdcP$Atm128AdcConfig$default$getChannel(
# 53 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7d7d79c0);
# 39 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t AdcP$Atm128AdcConfig$default$getPrescaler(
# 53 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7d7d79c0);
# 72 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static   void AdcP$Atm128AdcSingle$dataReady(uint16_t arg_0x7d902920, bool arg_0x7d902aa8);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void AdcP$acquiredData$runTask(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$read(
# 24 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7d7b8550);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(
# 24 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7d7b8550, 
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
error_t arg_0x7df91a28, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t arg_0x7df91bb0);
#line 63
static  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(
# 26 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7d7b63f8, 
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
error_t arg_0x7df91a28, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$val_t arg_0x7df91bb0);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(
# 27 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7d7b5188);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$request(
# 27 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7d7b5188);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(
# 27 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7d7b5188);
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
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(message_t *arg_0x7d7356e0, error_t arg_0x7d735868);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(message_t *arg_0x7dfc3ca0, void *arg_0x7dfc3e40, uint8_t arg_0x7dfc2010);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(
# 36 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7d742b00, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7dfe19a0, message_t *arg_0x7dfe1b50, uint8_t arg_0x7dfe1cd8);
#line 125
static  void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$getPayload(
# 36 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7d742b00, 
# 125 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7dfd3b18);
#line 112
static  uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$maxPayloadLength(
# 36 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7d742b00);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$default$sendDone(
# 36 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7d742b00, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7dfe0eb8, error_t arg_0x7dfd3068);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(message_t *arg_0x7d758938);
#line 108
static  void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(message_t *arg_0x7d757d60, uint8_t *arg_0x7d757f08);
#line 95
static  uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(
# 37 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7d7414b8, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7dfc3ca0, void *arg_0x7dfc3e40, uint8_t arg_0x7dfc2010);
# 136 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(message_t *arg_0x7d750da0);
# 79 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t SerialP$SplitControl$start(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SerialP$stopDoneTask$runTask(void);
#line 64
static  void SerialP$RunTx$runTask(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t SerialP$Init$init(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SerialP$startDoneTask$runTask(void);
# 83 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static   void SerialP$SerialFrameComm$dataReceived(uint8_t arg_0x7d6c2350);





static   void SerialP$SerialFrameComm$putDone(void);
#line 74
static   void SerialP$SerialFrameComm$delimiterReceived(void);
# 60 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static   error_t SerialP$SendBytePacket$completeSend(void);
#line 51
static   error_t SerialP$SendBytePacket$startSend(uint8_t arg_0x7d6d0c68);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(
# 40 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d650c20, 
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x7d7365a0, uint8_t arg_0x7d736728);
#line 89
static  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(
# 40 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d650c20, 
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x7d7356e0, error_t arg_0x7d735868);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(
# 39 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d6504a8, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7dfc3ca0, void *arg_0x7dfc3e40, uint8_t arg_0x7dfc2010);
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d64c620, 
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *arg_0x7d6f3918, uint8_t arg_0x7d6f3aa8);
#line 15
static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d64c620);
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d64c620, 
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *arg_0x7d6f3120, uint8_t arg_0x7d6f32b0);
# 70 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte(void);









static   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error_t arg_0x7d6cbce0);
# 51 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket(void);






static   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(uint8_t arg_0x7d6c8c70);










static   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(error_t arg_0x7d6c7270);
# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static   void HdlcTranslateC$UartStream$receivedByte(uint8_t arg_0x7d600010);
#line 99
static   void HdlcTranslateC$UartStream$receiveDone(uint8_t *arg_0x7d600ce0, uint16_t arg_0x7d600e70, error_t arg_0x7d5fc010);
#line 57
static   void HdlcTranslateC$UartStream$sendDone(uint8_t *arg_0x7d602f08, uint16_t arg_0x7d6010b0, error_t arg_0x7d601238);
# 45 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static   error_t HdlcTranslateC$SerialFrameComm$putDelimiter(void);
#line 68
static   void HdlcTranslateC$SerialFrameComm$resetReceive(void);
#line 54
static   error_t HdlcTranslateC$SerialFrameComm$putData(uint8_t arg_0x7d6c4118);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init(void);
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static   error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(uint8_t *arg_0x7d602770, uint16_t arg_0x7d602900);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(uint8_t arg_0x7d5d4b30);
#line 47
static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start(void);








static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t HplAtm128UartP$Uart0Init$init(void);
# 46 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   void HplAtm128UartP$HplUart0$tx(uint8_t arg_0x7d5d4068);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t HplAtm128UartP$Uart1Init$init(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   void HplAtm128UartP$HplUart1$default$rxDone(uint8_t arg_0x7d5d4b30);
#line 47
static   void HplAtm128UartP$HplUart1$default$txDone(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t HplAtm128UartP$Uart0RxControl$start(void);








static  error_t HplAtm128UartP$Uart0RxControl$stop(void);
#line 73
static  error_t HplAtm128UartP$Uart0TxControl$start(void);








static  error_t HplAtm128UartP$Uart0TxControl$stop(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static   void HplAtm128Timer3P$TimerCtrl$setCtrlCapture(Atm128TimerCtrlCapture_t arg_0x7d54a368);
#line 37
static   Atm128TimerCtrlCapture_t HplAtm128Timer3P$TimerCtrl$getCtrlCapture(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer3P$CompareA$default$fired(void);
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplAtm128Timer3P$Capture$default$captured(HplAtm128Timer3P$Capture$size_type arg_0x7d545120);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer3P$CompareB$default$fired(void);
#line 49
static   void HplAtm128Timer3P$CompareC$default$fired(void);
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   HplAtm128Timer3P$Timer$timer_size HplAtm128Timer3P$Timer$get(void);
#line 95
static   void HplAtm128Timer3P$Timer$setScale(uint8_t arg_0x7db447e0);
#line 58
static   void HplAtm128Timer3P$Timer$set(HplAtm128Timer3P$Timer$timer_size arg_0x7db50b70);










static   void HplAtm128Timer3P$Timer$start(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*InitThreeP.InitThree*/Atm128TimerInitC$1$Init$init(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$overflow(void);
#line 61
static   void /*CounterThree16C.NCounter*/Atm128CounterC$1$Timer$overflow(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void);
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static   uint8_t SerialPacketInfoActiveMessageP$Info$upperLength(message_t *arg_0x7d6f3918, uint8_t arg_0x7d6f3aa8);
#line 15
static   uint8_t SerialPacketInfoActiveMessageP$Info$offset(void);







static   uint8_t SerialPacketInfoActiveMessageP$Info$dataLinkLength(message_t *arg_0x7d6f3120, uint8_t arg_0x7d6f32b0);
# 79 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t OscilloscopeC$SerialControl$start(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t OscilloscopeC$AMSend$send(am_addr_t arg_0x7dfe19a0, message_t *arg_0x7dfe1b50, uint8_t arg_0x7dfe1cd8);
#line 125
static  void *OscilloscopeC$AMSend$getPayload(message_t *arg_0x7dfd3b18);
#line 112
static  uint8_t OscilloscopeC$AMSend$maxPayloadLength(void);
# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  error_t OscilloscopeC$Read$read(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static   void OscilloscopeC$Leds$led0Toggle(void);
#line 72
static   void OscilloscopeC$Leds$led1Toggle(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void OscilloscopeC$Timer$startPeriodic(uint32_t arg_0x7dfb2010);
# 33 "OscilloscopeC.nc"
message_t OscilloscopeC$sendbuf;
bool OscilloscopeC$sendbusy;


oscilloscope_t OscilloscopeC$local;

uint8_t OscilloscopeC$reading;






bool OscilloscopeC$suppress_count_change;


static inline void OscilloscopeC$report_problem(void);
static inline void OscilloscopeC$report_sent(void);


static inline  void OscilloscopeC$Boot$booted(void);






static inline void OscilloscopeC$startTimer(void);




static inline  void OscilloscopeC$SerialControl$startDone(error_t error);



static inline  void OscilloscopeC$SerialControl$stopDone(error_t error);


static inline  message_t *OscilloscopeC$Receive$receive(message_t *msg, void *payload, uint8_t len);
#line 97
static inline  void OscilloscopeC$Timer$fired(void);
#line 121
static inline  void OscilloscopeC$AMSend$sendDone(message_t *msg, error_t error);






static inline  void OscilloscopeC$Read$readDone(error_t result, uint16_t data);
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
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void);





static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void);

static inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void);



static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void);

static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void);



static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void);
#line 47
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void);


static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP$14$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP$14$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortB.Bit6*/HplAtm128GeneralIOPinP$14$IO$makeOutput(void);
# 33 "/opt/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC$__nesc_unnamed4311 {


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
uint8_t arg_0x7e162030);
# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void SchedulerBasicP$McuSleep$sleep(void);
# 50 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4312 {

  SchedulerBasicP$NUM_TASKS = 9U, 
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
# 31 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void LedsP$Led0$toggle(void);



static   void LedsP$Led0$makeOutput(void);
#line 29
static   void LedsP$Led0$set(void);

static   void LedsP$Led1$toggle(void);



static   void LedsP$Led1$makeOutput(void);
#line 29
static   void LedsP$Led1$set(void);





static   void LedsP$Led2$makeOutput(void);
#line 29
static   void LedsP$Led2$set(void);
# 45 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline  error_t LedsP$Init$init(void);
#line 73
static inline   void LedsP$Leds$led0Toggle(void);
#line 88
static inline   void LedsP$Leds$led1Toggle(void);
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
static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$setScale(uint8_t arg_0x7db447e0);
#line 58
static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$set(/*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$timer_size arg_0x7db50b70);










static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$start(void);
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Init$init(void);








static inline   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$overflow(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$fired(void);
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset(void);
#line 45
static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type arg_0x7db303d8);










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
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$startAt(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$size_type arg_0x7db72e78, /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$size_type arg_0x7db70030);
#line 62
static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$stop(void);
# 68 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmCounterC.nc"
/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$upper_count_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_upper;
/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_t0;
/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_dt;
uint8_t /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$m_skip_overflows;

enum /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$__nesc_unnamed4313 {

  TransformAlarmCounterC$0$MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$from_size_type ) - 1 - 0, 
  TransformAlarmCounterC$0$MAX_DELAY = (/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$to_size_type )1 << /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$MAX_DELAY_LOG2
};

enum /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$__nesc_unnamed4314 {

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
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7db72e78, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7db70030);
#line 105
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void);
#line 62
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void);
# 63 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4315 {
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
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t arg_0x7dfa3238, uint32_t arg_0x7dfa33c8);
#line 67
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7d9c53a0);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4316 {
#line 60
  VirtualizeTimerC$0$updateFromTimer = 1U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4317 {

  VirtualizeTimerC$0$NUM_TIMERS = 1, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4318 {

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









static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt);
#line 192
static inline   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void /*OscilloscopeAppC.Sensor.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$readDone(error_t arg_0x7df91a28, /*OscilloscopeAppC.Sensor.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$val_t arg_0x7df91bb0);
#line 55
static  error_t /*OscilloscopeAppC.Sensor.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$read(void);
# 33 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/ADC_ShiftM.nc"
static inline  error_t /*OscilloscopeAppC.Sensor.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$read(void);



static inline  void /*OscilloscopeAppC.Sensor.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$readDone(error_t result, uint16_t val);
# 110 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcMultiple.nc"
static   bool Atm128AdcP$Atm128AdcMultiple$dataReady(uint16_t arg_0x7d8f5bb0, bool arg_0x7d8f5d38, uint8_t arg_0x7d8f5ec0, 
uint8_t *arg_0x7d8f40a8, uint8_t *arg_0x7d8f4258);
# 72 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static   void Atm128AdcP$Atm128AdcSingle$dataReady(uint16_t arg_0x7d902920, bool arg_0x7d902aa8);
# 44 "/opt/tinyos-2.x/tos/chips/atm128/adc/HplAtm128Adc.nc"
static   Atm128Admux_t Atm128AdcP$HplAtm128Adc$getAdmux(void);
#line 73
static   void Atm128AdcP$HplAtm128Adc$enableAdc(void);
#line 49
static   void Atm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t arg_0x7d8e1ec8);
#line 141
static   bool Atm128AdcP$HplAtm128Adc$cancel(void);
#line 77
static   void Atm128AdcP$HplAtm128Adc$disableAdc(void);








static   void Atm128AdcP$HplAtm128Adc$disableInterruption(void);
#line 60
static   void Atm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t arg_0x7d8e07c8);
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static   uint8_t Atm128AdcP$Atm128Calibrate$adcPrescaler(void);
# 82 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcP.nc"
#line 78
struct Atm128AdcP$__nesc_unnamed4319 {
  bool multiple : 1;
  bool precise : 1;
  uint8_t channel : 5;
} Atm128AdcP$f;
#line 82
#line 78
struct Atm128AdcP$__nesc_unnamed4319 



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
static   void HplAtm128AdcP$HplAtm128Adc$dataReady(uint16_t arg_0x7d8d4208);
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
enum /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$__nesc_unnamed4320 {
#line 39
  RoundRobinResourceQueueC$0$NO_ENTRY = 0xFF
};
uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[(1U - 1) / 8 + 1];
uint8_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$last = 0;

static inline void /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$clearEntry(uint8_t id);



static inline  error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void);




static inline   bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEmpty(void);








static   bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(resource_client_id_t id);



static inline   resource_client_id_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$dequeue(void);
#line 84
static inline   error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(resource_client_id_t id);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(
# 54 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7d834308);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(
# 59 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7d8334d8);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(
# 59 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7d8334d8);
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x7d850af0);
#line 43
static   bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$isEmpty(void);
#line 60
static   resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$dequeue(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/ResourceController.nc"
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceController$requested(void);
#line 46
static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceController$granted(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$granted(
# 53 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
uint8_t arg_0x7d836948);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void);
# 73 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4321 {
#line 73
  ArbiterP$0$grantedTask = 2U
};
#line 73
typedef int /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_sillytask_grantedTask[/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask];
#line 66
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4322 {
#line 66
  ArbiterP$0$RES_CONTROLLED, ArbiterP$0$RES_GRANTING, ArbiterP$0$RES_IMM_GRANTING, ArbiterP$0$RES_BUSY
};
#line 67
enum /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$__nesc_unnamed4323 {
#line 67
  ArbiterP$0$CONTROLLER_ID = 1U
};
uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED;
 uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$CONTROLLER_ID;
 uint8_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId;



static inline   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$request(uint8_t id);
#line 106
static inline   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$release(uint8_t id);
#line 125
static inline   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceController$release(void);
#line 172
static inline  void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void);
#line 184
static inline   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$default$granted(uint8_t id);

static inline    void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id);
#line 198
static inline    void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline    void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
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
uint8_t arg_0x7d7da7d8, 
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
error_t arg_0x7df91a28, AdcP$Read$val_t arg_0x7df91bb0);
# 65 "/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
static   void AdcP$ReadNow$readDone(
# 49 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7d7d9628, 
# 65 "/opt/tinyos-2.x/tos/interfaces/ReadNow.nc"
error_t arg_0x7d918b10, AdcP$ReadNow$val_t arg_0x7d918c98);
# 32 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t AdcP$Atm128AdcConfig$getRefVoltage(
# 53 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7d7d79c0);
# 25 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t AdcP$Atm128AdcConfig$getChannel(
# 53 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7d7d79c0);
# 39 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
static   uint8_t AdcP$Atm128AdcConfig$getPrescaler(
# 53 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
uint8_t arg_0x7d7d79c0);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcSingle.nc"
static   bool AdcP$Atm128AdcSingle$getData(uint8_t arg_0x7d903a50, uint8_t arg_0x7d903be0, 
bool arg_0x7d903d80, uint8_t arg_0x7d903f10);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t AdcP$acquiredData$postTask(void);
# 103 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
enum AdcP$__nesc_unnamed4324 {
#line 103
  AdcP$acquiredData = 3U
};
#line 103
typedef int AdcP$__nesc_sillytask_acquiredData[AdcP$acquiredData];
#line 57
enum AdcP$__nesc_unnamed4325 {
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
uint8_t arg_0x7d7b8550, 
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
error_t arg_0x7df91a28, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t arg_0x7df91bb0);
#line 55
static  error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$read(
# 26 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7d7b63f8);
# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$release(
# 27 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7d7b5188);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$request(
# 27 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
uint8_t arg_0x7d7b5188);



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
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(message_t *arg_0x7d7365a0, uint8_t arg_0x7d736728);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(
# 36 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7d742b00, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7dfe0eb8, error_t arg_0x7dfd3068);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(
# 37 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x7d7414b8, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7dfc3ca0, void *arg_0x7dfc3e40, uint8_t arg_0x7dfc2010);
# 49 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(message_t *msg);



static inline  error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 73
static inline  uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$maxPayloadLength(am_id_t id);



static inline  void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$getPayload(am_id_t id, message_t *m);



static inline  void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(message_t *msg, error_t result);



static inline   void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$default$sendDone(uint8_t id, message_t *msg, error_t result);



static inline   message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(uint8_t id, message_t *msg, void *payload, uint8_t len);
#line 102
static inline  message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len);







static inline  uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(message_t *msg);








static inline  uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength(void);



static inline  void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(message_t *msg, uint8_t *len);
#line 158
static inline  am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(message_t *amsg);
# 88 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void SerialP$SplitControl$startDone(error_t arg_0x7e072330);
#line 110
static  void SerialP$SplitControl$stopDone(error_t arg_0x7e072e68);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t SerialP$stopDoneTask$postTask(void);
# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t SerialP$SerialControl$start(void);








static  error_t SerialP$SerialControl$stop(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t SerialP$RunTx$postTask(void);
#line 56
static   error_t SerialP$startDoneTask$postTask(void);
# 45 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static   error_t SerialP$SerialFrameComm$putDelimiter(void);
#line 68
static   void SerialP$SerialFrameComm$resetReceive(void);
#line 54
static   error_t SerialP$SerialFrameComm$putData(uint8_t arg_0x7d6c4118);
# 70 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static   uint8_t SerialP$SendBytePacket$nextByte(void);









static   void SerialP$SendBytePacket$sendCompleted(error_t arg_0x7d6cbce0);
# 51 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static   error_t SerialP$ReceiveBytePacket$startPacket(void);






static   void SerialP$ReceiveBytePacket$byteReceived(uint8_t arg_0x7d6c8c70);










static   void SerialP$ReceiveBytePacket$endPacket(error_t arg_0x7d6c7270);
# 188 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
enum SerialP$__nesc_unnamed4326 {
#line 188
  SerialP$RunTx = 4U
};
#line 188
typedef int SerialP$__nesc_sillytask_RunTx[SerialP$RunTx];
#line 319
enum SerialP$__nesc_unnamed4327 {
#line 319
  SerialP$startDoneTask = 5U
};
#line 319
typedef int SerialP$__nesc_sillytask_startDoneTask[SerialP$startDoneTask];




enum SerialP$__nesc_unnamed4328 {
#line 324
  SerialP$stopDoneTask = 6U
};
#line 324
typedef int SerialP$__nesc_sillytask_stopDoneTask[SerialP$stopDoneTask];
#line 78
enum SerialP$__nesc_unnamed4329 {
  SerialP$RX_DATA_BUFFER_SIZE = 2, 
  SerialP$TX_DATA_BUFFER_SIZE = 4, 
  SerialP$SERIAL_MTU = 255, 
  SerialP$SERIAL_VERSION = 1, 
  SerialP$ACK_QUEUE_SIZE = 5
};

enum SerialP$__nesc_unnamed4330 {
  SerialP$RXSTATE_NOSYNC, 
  SerialP$RXSTATE_PROTO, 
  SerialP$RXSTATE_TOKEN, 
  SerialP$RXSTATE_INFO, 
  SerialP$RXSTATE_INACTIVE
};

enum SerialP$__nesc_unnamed4331 {
  SerialP$TXSTATE_IDLE, 
  SerialP$TXSTATE_PROTO, 
  SerialP$TXSTATE_SEQNO, 
  SerialP$TXSTATE_INFO, 
  SerialP$TXSTATE_FCS1, 
  SerialP$TXSTATE_FCS2, 
  SerialP$TXSTATE_ENDFLAG, 
  SerialP$TXSTATE_ENDWAIT, 
  SerialP$TXSTATE_FINISH, 
  SerialP$TXSTATE_ERROR, 
  SerialP$TXSTATE_INACTIVE
};





#line 108
typedef enum SerialP$__nesc_unnamed4332 {
  SerialP$BUFFER_AVAILABLE, 
  SerialP$BUFFER_FILLING, 
  SerialP$BUFFER_COMPLETE
} SerialP$tx_data_buffer_states_t;

enum SerialP$__nesc_unnamed4333 {
  SerialP$TX_ACK_INDEX = 0, 
  SerialP$TX_DATA_INDEX = 1, 
  SerialP$TX_BUFFER_COUNT = 2
};






#line 121
typedef struct SerialP$__nesc_unnamed4334 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP$RX_DATA_BUFFER_SIZE + 1];
} SerialP$rx_buf_t;




#line 127
typedef struct SerialP$__nesc_unnamed4335 {
  uint8_t state;
  uint8_t buf;
} SerialP$tx_buf_t;





#line 132
typedef struct SerialP$__nesc_unnamed4336 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP$ACK_QUEUE_SIZE + 1];
} SerialP$ack_queue_t;



SerialP$rx_buf_t SerialP$rxBuf;
SerialP$tx_buf_t SerialP$txBuf[SerialP$TX_BUFFER_COUNT];



uint8_t SerialP$rxState;
uint8_t SerialP$rxByteCnt;
uint8_t SerialP$rxProto;
uint8_t SerialP$rxSeqno;
uint16_t SerialP$rxCRC;



 uint8_t SerialP$txState;
 uint8_t SerialP$txByteCnt;
 uint8_t SerialP$txProto;
 uint8_t SerialP$txSeqno;
 uint16_t SerialP$txCRC;
uint8_t SerialP$txPending;
 uint8_t SerialP$txIndex;


SerialP$ack_queue_t SerialP$ackQ;

bool SerialP$offPending = FALSE;



static __inline void SerialP$txInit(void);
static __inline void SerialP$rxInit(void);
static __inline void SerialP$ackInit(void);

static __inline bool SerialP$ack_queue_is_full(void);
static __inline bool SerialP$ack_queue_is_empty(void);
static __inline void SerialP$ack_queue_push(uint8_t token);
static __inline uint8_t SerialP$ack_queue_top(void);
static inline uint8_t SerialP$ack_queue_pop(void);




static __inline void SerialP$rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP$rx_buffer_top(void);
static __inline uint8_t SerialP$rx_buffer_pop(void);
static __inline uint16_t SerialP$rx_current_crc(void);

static void SerialP$rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP$MaybeScheduleTx(void);




static __inline void SerialP$txInit(void);
#line 204
static __inline void SerialP$rxInit(void);








static __inline void SerialP$ackInit(void);



static inline  error_t SerialP$Init$init(void);
#line 231
static __inline bool SerialP$ack_queue_is_full(void);









static __inline bool SerialP$ack_queue_is_empty(void);





static __inline void SerialP$ack_queue_push(uint8_t token);









static __inline uint8_t SerialP$ack_queue_top(void);









static inline uint8_t SerialP$ack_queue_pop(void);
#line 294
static __inline void SerialP$rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP$rx_buffer_top(void);



static __inline uint8_t SerialP$rx_buffer_pop(void);





static __inline uint16_t SerialP$rx_current_crc(void);










static inline  void SerialP$startDoneTask$runTask(void);




static inline  void SerialP$stopDoneTask$runTask(void);




static inline  error_t SerialP$SplitControl$start(void);




static void SerialP$testOff(void);
#line 371
static inline   void SerialP$SerialFrameComm$delimiterReceived(void);


static inline   void SerialP$SerialFrameComm$dataReceived(uint8_t data);



static inline bool SerialP$valid_rx_proto(uint8_t proto);










static void SerialP$rx_state_machine(bool isDelimeter, uint8_t data);
#line 489
static void SerialP$MaybeScheduleTx(void);










static inline   error_t SerialP$SendBytePacket$completeSend(void);








static inline   error_t SerialP$SendBytePacket$startSend(uint8_t b);
#line 526
static inline  void SerialP$RunTx$runTask(void);
#line 629
static inline   void SerialP$SerialFrameComm$putDone(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$postTask(void);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(
# 40 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d650c20, 
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x7d7356e0, error_t arg_0x7d735868);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$postTask(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$receive(
# 39 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d6504a8, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7dfc3ca0, void *arg_0x7dfc3e40, uint8_t arg_0x7dfc2010);
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d64c620, 
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *arg_0x7d6f3918, uint8_t arg_0x7d6f3aa8);
#line 15
static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d64c620);
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x7d64c620, 
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *arg_0x7d6f3120, uint8_t arg_0x7d6f32b0);
# 60 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$completeSend(void);
#line 51
static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$startSend(uint8_t arg_0x7d6d0c68);
# 144 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4337 {
#line 144
  SerialDispatcherP$0$signalSendDone = 7U
};
#line 144
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone];
#line 261
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4338 {
#line 261
  SerialDispatcherP$0$receiveTask = 8U
};
#line 261
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask];
#line 55
#line 51
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4339 {
  SerialDispatcherP$0$SEND_STATE_IDLE = 0, 
  SerialDispatcherP$0$SEND_STATE_BEGIN = 1, 
  SerialDispatcherP$0$SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4340 {
  SerialDispatcherP$0$RECV_STATE_IDLE = 0, 
  SerialDispatcherP$0$RECV_STATE_BEGIN = 1, 
  SerialDispatcherP$0$RECV_STATE_DATA = 2
};






#line 63
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$__nesc_unnamed4341 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[2];
message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[1] };




uint8_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer = (uint8_t *)&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messages[0];

uint8_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex = 0;
 error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskWhich;
message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskSize = 0;

static inline  error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(uint8_t id, message_t *msg, uint8_t len);
#line 144
static inline  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask(void);
#line 164
static inline   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte(void);
#line 180
static inline   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$isCurrentBufferLocked(void);



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$lockCurrentBuffer(void);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBufferSwap(void);




static inline   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket(void);
#line 230
static inline   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(uint8_t b);
#line 261
static inline  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask(void);
#line 282
static   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(error_t result);
#line 341
static inline    uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(uart_id_t id);


static inline    uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline    uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline   message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static   error_t HdlcTranslateC$UartStream$send(uint8_t *arg_0x7d602770, uint16_t arg_0x7d602900);
# 83 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static   void HdlcTranslateC$SerialFrameComm$dataReceived(uint8_t arg_0x7d6c2350);





static   void HdlcTranslateC$SerialFrameComm$putDone(void);
#line 74
static   void HdlcTranslateC$SerialFrameComm$delimiterReceived(void);
# 47 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
#line 44
typedef struct HdlcTranslateC$__nesc_unnamed4342 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC$HdlcState;


 HdlcTranslateC$HdlcState HdlcTranslateC$state = { 0, 0 };
 uint8_t HdlcTranslateC$txTemp;
 uint8_t HdlcTranslateC$m_data;


static inline   void HdlcTranslateC$SerialFrameComm$resetReceive(void);





static inline   void HdlcTranslateC$UartStream$receivedByte(uint8_t data);
#line 86
static   error_t HdlcTranslateC$SerialFrameComm$putDelimiter(void);





static   error_t HdlcTranslateC$SerialFrameComm$putData(uint8_t data);
#line 104
static inline   void HdlcTranslateC$UartStream$sendDone(uint8_t *buf, uint16_t len, 
error_t error);










static inline   void HdlcTranslateC$UartStream$receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$start(void);








static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$stop(void);
# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receivedByte(uint8_t arg_0x7d600010);
#line 99
static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receiveDone(uint8_t *arg_0x7d600ce0, uint16_t arg_0x7d600e70, error_t arg_0x7d5fc010);
#line 57
static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$sendDone(uint8_t *arg_0x7d602f08, uint16_t arg_0x7d6010b0, error_t arg_0x7d601238);
# 46 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(uint8_t arg_0x7d5d4068);
# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$start(void);








static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$stop(void);
# 56 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
 uint8_t */*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf;
#line 56
 uint8_t */*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf;
 uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_len;
#line 57
 uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_len;
 uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos;
#line 58
 uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_pos;
 uint16_t /*Atm128Uart0C.UartP*/Atm128UartP$0$m_byte_time;

static inline  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init(void);







static inline  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start(void);





static inline  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop(void);
#line 107
static inline   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(uint8_t data);
#line 123
static   error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(uint8_t *buf, uint16_t len);
#line 139
static inline   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone(void);
#line 174
static inline   void /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static   void HplAtm128UartP$HplUart0$rxDone(uint8_t arg_0x7d5d4b30);
#line 47
static   void HplAtm128UartP$HplUart0$txDone(void);

static   void HplAtm128UartP$HplUart1$rxDone(uint8_t arg_0x7d5d4b30);
#line 47
static   void HplAtm128UartP$HplUart1$txDone(void);
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static   uint16_t HplAtm128UartP$Atm128Calibrate$baudrateRegister(uint32_t arg_0x7dee3610);
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void HplAtm128UartP$McuPowerState$update(void);
# 87 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline  error_t HplAtm128UartP$Uart0Init$init(void);
#line 107
static inline  error_t HplAtm128UartP$Uart0TxControl$start(void);






static inline  error_t HplAtm128UartP$Uart0TxControl$stop(void);






static inline  error_t HplAtm128UartP$Uart0RxControl$start(void);






static inline  error_t HplAtm128UartP$Uart0RxControl$stop(void);
#line 167
static   void HplAtm128UartP$HplUart0$tx(uint8_t data);






void __vector_18(void) __attribute((signal))   ;





void __vector_20(void) __attribute((interrupt))   ;



static inline  error_t HplAtm128UartP$Uart1Init$init(void);
#line 271
void __vector_30(void) __attribute((signal))   ;




void __vector_32(void) __attribute((interrupt))   ;





static inline    void HplAtm128UartP$HplUart1$default$txDone(void);
static inline    void HplAtm128UartP$HplUart1$default$rxDone(uint8_t data);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer3P$CompareA$fired(void);
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplAtm128Timer3P$Capture$captured(HplAtm128Timer3P$Capture$size_type arg_0x7d545120);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer3P$CompareB$fired(void);
#line 49
static   void HplAtm128Timer3P$CompareC$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void HplAtm128Timer3P$Timer$overflow(void);
# 47 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline   uint16_t HplAtm128Timer3P$Timer$get(void);


static inline   void HplAtm128Timer3P$Timer$set(uint16_t t);








static inline   void HplAtm128Timer3P$Timer$setScale(uint8_t s);









static inline   Atm128TimerCtrlCapture_t HplAtm128Timer3P$TimerCtrl$getCtrlCapture(void);









static inline uint16_t HplAtm128Timer3P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline   void HplAtm128Timer3P$TimerCtrl$setCtrlCapture(Atm128_TCCR3B_t x);
#line 127
static inline   void HplAtm128Timer3P$Timer$start(void);
#line 188
static inline    void HplAtm128Timer3P$CompareA$default$fired(void);
void __vector_26(void) __attribute((interrupt))   ;


static inline    void HplAtm128Timer3P$CompareB$default$fired(void);
void __vector_27(void) __attribute((interrupt))   ;


static inline    void HplAtm128Timer3P$CompareC$default$fired(void);
void __vector_28(void) __attribute((interrupt))   ;


static inline    void HplAtm128Timer3P$Capture$default$captured(uint16_t time);
void __vector_25(void) __attribute((interrupt))   ;



void __vector_29(void) __attribute((interrupt))   ;
# 95 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$setScale(uint8_t arg_0x7db447e0);
#line 58
static   void /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$set(/*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$timer_size arg_0x7db50b70);










static   void /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$start(void);
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*InitThreeP.InitThree*/Atm128TimerInitC$1$Init$init(void);








static inline   void /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$overflow(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*CounterThree16C.NCounter*/Atm128CounterC$1$Counter$overflow(void);
# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   void /*CounterThree16C.NCounter*/Atm128CounterC$1$Timer$overflow(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*CounterMicro32C.Transform32*/TransformCounterC$0$Counter$overflow(void);
# 56 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.Transform32*/TransformCounterC$0$upper_count_type /*CounterMicro32C.Transform32*/TransformCounterC$0$m_upper;

enum /*CounterMicro32C.Transform32*/TransformCounterC$0$__nesc_unnamed4343 {

  TransformCounterC$0$LOW_SHIFT_RIGHT = 0, 
  TransformCounterC$0$HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC$0$from_size_type ) - /*CounterMicro32C.Transform32*/TransformCounterC$0$LOW_SHIFT_RIGHT, 
  TransformCounterC$0$NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC$0$to_size_type ) - 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC$0$from_size_type ) + 0, 



  TransformCounterC$0$OVERFLOW_MASK = /*CounterMicro32C.Transform32*/TransformCounterC$0$NUM_UPPER_BITS ? ((/*CounterMicro32C.Transform32*/TransformCounterC$0$upper_count_type )2 << (/*CounterMicro32C.Transform32*/TransformCounterC$0$NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 122
static inline   void /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void);
# 40 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline   uint8_t SerialPacketInfoActiveMessageP$Info$offset(void);


static inline   uint8_t SerialPacketInfoActiveMessageP$Info$dataLinkLength(message_t *msg, uint8_t upperLen);


static inline   uint8_t SerialPacketInfoActiveMessageP$Info$upperLength(message_t *msg, uint8_t dataLinkLen);
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
  union __nesc_unnamed4344 {
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
inline static   void Atm128AdcP$HplAtm128Adc$setAdcsra(Atm128Adcsra_t arg_0x7d8e07c8){
#line 60
  HplAtm128AdcP$HplAtm128Adc$setAdcsra(arg_0x7d8e07c8);
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

# 79 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 79
{
#line 79
  union __nesc_unnamed4345 {
#line 79
    Atm128TimerCtrlCapture_t f;
#line 79
    uint16_t t;
  } 
#line 79
  c = { .f = x };

#line 79
  return c.t;
}





static inline   void HplAtm128Timer3P$TimerCtrl$setCtrlCapture(Atm128_TCCR3B_t x)
#line 86
{
  * (volatile uint8_t *)0x8A = HplAtm128Timer3P$TimerCtrlCapture2int(x);
}

#line 69
static inline   Atm128TimerCtrlCapture_t HplAtm128Timer3P$TimerCtrl$getCtrlCapture(void)
#line 69
{
  return * (Atm128TimerCtrlCapture_t *)& * (volatile uint8_t *)0x8A;
}

#line 59
static inline   void HplAtm128Timer3P$Timer$setScale(uint8_t s)
#line 59
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer3P$TimerCtrl$getCtrlCapture();

#line 61
  x.bits.cs = s;
  HplAtm128Timer3P$TimerCtrl$setCtrlCapture(x);
}

# 95 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$setScale(uint8_t arg_0x7db447e0){
#line 95
  HplAtm128Timer3P$Timer$setScale(arg_0x7db447e0);
#line 95
}
#line 95
# 127 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline   void HplAtm128Timer3P$Timer$start(void)
#line 127
{
#line 127
  * (volatile uint8_t *)0x7D |= 1 << 2;
}

# 69 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$start(void){
#line 69
  HplAtm128Timer3P$Timer$start();
#line 69
}
#line 69
# 50 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline   void HplAtm128Timer3P$Timer$set(uint16_t t)
#line 50
{
#line 50
  * (volatile uint16_t *)0x88 = t;
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$set(/*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$timer_size arg_0x7db50b70){
#line 58
  HplAtm128Timer3P$Timer$set(arg_0x7db50b70);
#line 58
}
#line 58
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*InitThreeP.InitThree*/Atm128TimerInitC$1$Init$init(void)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$set(0);
    /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$start();
    /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$setScale(2);
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t MotePlatformP$SubInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*InitThreeP.InitThree*/Atm128TimerInitC$1$Init$init();
#line 51
  result = ecombine(result, Atm128AdcP$Init$init());
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
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void *source)
#line 235
{
  const uint8_t *base = source;

#line 237
  return base[0];
}

# 49 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(message_t *msg)
#line 49
{
  return (serial_header_t *)(msg->data - sizeof(serial_header_t ));
}

#line 158
static inline  am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(message_t *amsg)
#line 158
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(amsg);

#line 160
  return __nesc_ntoh_uint8((unsigned char *)&header->type);
}

# 31 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led0$toggle(void){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle();
#line 31
}
#line 31
# 73 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led0Toggle(void)
#line 73
{
  LedsP$Led0$toggle();
  ;
#line 75
  ;
}

# 56 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void OscilloscopeC$Leds$led0Toggle(void){
#line 56
  LedsP$Leds$led0Toggle();
#line 56
}
#line 56
# 49 "OscilloscopeC.nc"
static inline void OscilloscopeC$report_problem(void)
#line 49
{
#line 49
  OscilloscopeC$Leds$led0Toggle();
}

#line 121
static inline  void OscilloscopeC$AMSend$sendDone(message_t *msg, error_t error)
#line 121
{
  if (error != SUCCESS) {
    OscilloscopeC$report_problem();
    }
  OscilloscopeC$sendbusy = FALSE;
}

# 85 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline   void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$default$sendDone(uint8_t id, message_t *msg, error_t result)
#line 85
{
  return;
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(am_id_t arg_0x7d742b00, message_t *arg_0x7dfe0eb8, error_t arg_0x7dfd3068){
#line 99
  switch (arg_0x7d742b00) {
#line 99
    case AM_OSCILLOSCOPE:
#line 99
      OscilloscopeC$AMSend$sendDone(arg_0x7dfe0eb8, arg_0x7dfd3068);
#line 99
      break;
#line 99
    default:
#line 99
      /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$default$sendDone(arg_0x7d742b00, arg_0x7dfe0eb8, arg_0x7dfd3068);
#line 99
      break;
#line 99
    }
#line 99
}
#line 99
# 81 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline  void /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(message_t *msg, error_t result)
#line 81
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(msg), msg, result);
}

# 359 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 359
{
  return;
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(uart_id_t arg_0x7d650c20, message_t *arg_0x7d7356e0, error_t arg_0x7d735868){
#line 89
  switch (arg_0x7d650c20) {
#line 89
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 89
      /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$sendDone(arg_0x7d7356e0, arg_0x7d735868);
#line 89
      break;
#line 89
    default:
#line 89
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$default$sendDone(arg_0x7d650c20, arg_0x7d7356e0, arg_0x7d735868);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 144 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask(void)
#line 144
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 148
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError;
#line 148
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendCancelled) {
#line 150
    error = ECANCEL;
    }
#line 151
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer, error);
}

#line 198
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$unlockBuffer(uint8_t which)
#line 198
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufZeroLocked = 0;
    }
}

# 264 "/usr/lib/ncc/nesc_nx.h"
static __inline uint16_t __nesc_ntoh_uint16(const void *source)
#line 264
{
  const uint8_t *base = source;

#line 266
  return ((uint16_t )base[0] << 8) | base[1];
}

static __inline uint16_t __nesc_hton_uint16(void *target, uint16_t value)
#line 269
{
  uint8_t *base = target;

#line 271
  base[1] = value;
  base[0] = value >> 8;
  return value;
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
# 142 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void OscilloscopeC$Timer$startPeriodic(uint32_t arg_0x7dfb2010){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(0U, arg_0x7dfb2010);
#line 53
}
#line 53
# 60 "OscilloscopeC.nc"
static inline void OscilloscopeC$startTimer(void)
#line 60
{
  OscilloscopeC$Timer$startPeriodic(__nesc_ntoh_uint16((unsigned char *)&OscilloscopeC$local.interval));
  OscilloscopeC$reading = 0;
}








static inline  message_t *OscilloscopeC$Receive$receive(message_t *msg, void *payload, uint8_t len)
#line 72
{
  oscilloscope_t *omsg = payload;




  if (__nesc_ntoh_uint16((unsigned char *)&omsg->version) > __nesc_ntoh_uint16((unsigned char *)&OscilloscopeC$local.version)) 
    {
      __nesc_hton_uint16((unsigned char *)&OscilloscopeC$local.version, __nesc_ntoh_uint16((unsigned char *)&omsg->version));
      __nesc_hton_uint16((unsigned char *)&OscilloscopeC$local.interval, __nesc_ntoh_uint16((unsigned char *)&omsg->interval));
      OscilloscopeC$startTimer();
    }
  if (__nesc_ntoh_uint16((unsigned char *)&omsg->count) > __nesc_ntoh_uint16((unsigned char *)&OscilloscopeC$local.count)) 
    {
      __nesc_hton_uint16((unsigned char *)&OscilloscopeC$local.count, __nesc_ntoh_uint16((unsigned char *)&omsg->count));
      OscilloscopeC$suppress_count_change = TRUE;
    }

  return msg;
}

# 89 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline   message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 89
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(am_id_t arg_0x7d7414b8, message_t *arg_0x7dfc3ca0, void *arg_0x7dfc3e40, uint8_t arg_0x7dfc2010){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x7d7414b8) {
#line 67
    case AM_OSCILLOSCOPE:
#line 67
      result = OscilloscopeC$Receive$receive(arg_0x7dfc3ca0, arg_0x7dfc3e40, arg_0x7dfc2010);
#line 67
      break;
#line 67
    default:
#line 67
      result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$default$receive(arg_0x7d7414b8, arg_0x7dfc3ca0, arg_0x7dfc3e40, arg_0x7dfc2010);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 102 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline  message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 102
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Receive$receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMPacket$type(msg), msg, msg->data, len);
}

# 354 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline   message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 356
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$receive(uart_id_t arg_0x7d6504a8, message_t *arg_0x7dfc3ca0, void *arg_0x7dfc3e40, uint8_t arg_0x7dfc2010){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x7d6504a8) {
#line 67
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 67
      result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubReceive$receive(arg_0x7dfc3ca0, arg_0x7dfc3e40, arg_0x7dfc2010);
#line 67
      break;
#line 67
    default:
#line 67
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$default$receive(arg_0x7d6504a8, arg_0x7dfc3ca0, arg_0x7dfc3e40, arg_0x7dfc2010);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 46 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline   uint8_t SerialPacketInfoActiveMessageP$Info$upperLength(message_t *msg, uint8_t dataLinkLen)
#line 46
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 348 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline    uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 349
{
  return 0;
}

# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(uart_id_t arg_0x7d64c620, message_t *arg_0x7d6f3918, uint8_t arg_0x7d6f3aa8){
#line 31
  unsigned char result;
#line 31

#line 31
  switch (arg_0x7d64c620) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      result = SerialPacketInfoActiveMessageP$Info$upperLength(arg_0x7d6f3918, arg_0x7d6f3aa8);
#line 31
      break;
#line 31
    default:
#line 31
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$upperLength(arg_0x7d64c620, arg_0x7d6f3918, arg_0x7d6f3aa8);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return result;
#line 31
}
#line 31
# 40 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline   uint8_t SerialPacketInfoActiveMessageP$Info$offset(void)
#line 40
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 341 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline    uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(uart_id_t id)
#line 341
{
  return 0;
}

# 15 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(uart_id_t arg_0x7d64c620){
#line 15
  unsigned char result;
#line 15

#line 15
  switch (arg_0x7d64c620) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      result = SerialPacketInfoActiveMessageP$Info$offset();
#line 15
      break;
#line 15
    default:
#line 15
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$offset(arg_0x7d64c620);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return result;
#line 15
}
#line 15
# 261 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline  void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask(void)
#line 261
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 266
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 266
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskWhich;
    }
#line 271
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Receive$receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 275
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending = FALSE;
    }
#line 279
    __nesc_atomic_end(__nesc_atomic); }
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
# 69 "OscilloscopeC.nc"
static inline  void OscilloscopeC$SerialControl$stopDone(error_t error)
#line 69
{
}

# 110 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void SerialP$SplitControl$stopDone(error_t arg_0x7e072e68){
#line 110
  OscilloscopeC$SerialControl$stopDone(arg_0x7e072e68);
#line 110
}
#line 110
# 123 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline   void McuSleepC$McuPowerState$update(void)
#line 123
{
}

# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static   void HplAtm128UartP$McuPowerState$update(void){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 128 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline  error_t HplAtm128UartP$Uart0RxControl$stop(void)
#line 128
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 7);
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 4);
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 82 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$stop(void){
#line 82
  unsigned char result;
#line 82

#line 82
  result = HplAtm128UartP$Uart0RxControl$stop();
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 114 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline  error_t HplAtm128UartP$Uart0TxControl$stop(void)
#line 114
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 6);
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 3);
  HplAtm128UartP$McuPowerState$update();
  return SUCCESS;
}

# 82 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$stop(void){
#line 82
  unsigned char result;
#line 82

#line 82
  result = HplAtm128UartP$Uart0TxControl$stop();
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 75 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop(void)
#line 75
{
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$stop();
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$stop();
  return SUCCESS;
}

# 82 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t SerialP$SerialControl$stop(void){
#line 82
  unsigned char result;
#line 82

#line 82
  result = /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$stop();
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 324 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline  void SerialP$stopDoneTask$runTask(void)
#line 324
{
  SerialP$SerialControl$stop();
  SerialP$SplitControl$stopDone(SUCCESS);
}

# 65 "OscilloscopeC.nc"
static inline  void OscilloscopeC$SerialControl$startDone(error_t error)
#line 65
{
  OscilloscopeC$startTimer();
}

# 88 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void SerialP$SplitControl$startDone(error_t arg_0x7e072330){
#line 88
  OscilloscopeC$SerialControl$startDone(arg_0x7e072330);
#line 88
}
#line 88
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
inline static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$start(void){
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
inline static  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$start(void){
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
# 69 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start(void)
#line 69
{
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartTxControl$start();
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUartRxControl$start();
  return SUCCESS;
}

# 73 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t SerialP$SerialControl$start(void){
#line 73
  unsigned char result;
#line 73

#line 73
  result = /*Atm128Uart0C.UartP*/Atm128UartP$0$StdControl$start();
#line 73

#line 73
  return result;
#line 73
}
#line 73
# 319 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline  void SerialP$startDoneTask$runTask(void)
#line 319
{
  SerialP$SerialControl$start();
  SerialP$SplitControl$startDone(SUCCESS);
}

# 45 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static   error_t SerialP$SerialFrameComm$putDelimiter(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = HdlcTranslateC$SerialFrameComm$putDelimiter();
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 180 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(error_t error)
#line 180
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 181
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError = error;
#line 181
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$postTask();
}

# 80 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static   void SerialP$SendBytePacket$sendCompleted(error_t arg_0x7d6cbce0){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$sendCompleted(arg_0x7d6cbce0);
#line 80
}
#line 80
# 241 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP$ack_queue_is_empty(void)
#line 241
{
  bool ret;

#line 243
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 243
    ret = SerialP$ackQ.writePtr == SerialP$ackQ.readPtr;
#line 243
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP$ack_queue_top(void)
#line 257
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 259
  {
    if (!SerialP$ack_queue_is_empty()) {
        tmp = SerialP$ackQ.buf[SerialP$ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP$ack_queue_pop(void)
#line 267
{
  uint8_t retval = 0;

#line 269
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 269
    {
      if (SerialP$ackQ.writePtr != SerialP$ackQ.readPtr) {
          retval = SerialP$ackQ.buf[SerialP$ackQ.readPtr];
          if (++ SerialP$ackQ.readPtr > SerialP$ACK_QUEUE_SIZE) {
#line 272
            SerialP$ackQ.readPtr = 0;
            }
        }
    }
#line 275
    __nesc_atomic_end(__nesc_atomic); }
#line 275
  return retval;
}

#line 526
static inline  void SerialP$RunTx$runTask(void)
#line 526
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 543
    {
      SerialP$txPending = 0;
      idle = SerialP$txState == SerialP$TXSTATE_IDLE;
      done = SerialP$txState == SerialP$TXSTATE_FINISH;
      fail = SerialP$txState == SerialP$TXSTATE_ERROR;
      if (done || fail) {
          SerialP$txState = SerialP$TXSTATE_IDLE;
          SerialP$txBuf[SerialP$txIndex].state = SerialP$BUFFER_AVAILABLE;
        }
    }
#line 552
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      SerialP$txSeqno++;
      if (SerialP$txProto == SERIAL_PROTO_ACK) {
          SerialP$ack_queue_pop();
        }
      else {
          result = done ? SUCCESS : FAIL;
          send_completed = TRUE;
        }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 570
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 570
        goInactive = SerialP$offPending;
#line 570
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 572
            SerialP$txState = SerialP$TXSTATE_INACTIVE;
#line 572
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 578
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 578
            {
              myAckState = SerialP$txBuf[SerialP$TX_ACK_INDEX].state;
              myDataState = SerialP$txBuf[SerialP$TX_DATA_INDEX].state;
            }
#line 581
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP$ack_queue_is_empty() && myAckState == SerialP$BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 583
                {
                  SerialP$txBuf[SerialP$TX_ACK_INDEX].state = SerialP$BUFFER_COMPLETE;
                  SerialP$txBuf[SerialP$TX_ACK_INDEX].buf = SerialP$ack_queue_top();
                }
#line 586
                __nesc_atomic_end(__nesc_atomic); }
              SerialP$txProto = SERIAL_PROTO_ACK;
              SerialP$txIndex = SerialP$TX_ACK_INDEX;
              start_it = TRUE;
            }
          else {
#line 591
            if (myDataState == SerialP$BUFFER_FILLING || myDataState == SerialP$BUFFER_COMPLETE) {
                SerialP$txProto = SERIAL_PROTO_PACKET_NOACK;
                SerialP$txIndex = SerialP$TX_DATA_INDEX;
                start_it = TRUE;
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP$SendBytePacket$sendCompleted(result);
    }

  if (SerialP$txState == SerialP$TXSTATE_INACTIVE) {
      SerialP$testOff();
      return;
    }

  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 616
        {
          SerialP$txCRC = 0;
          SerialP$txByteCnt = 0;
          SerialP$txState = SerialP$TXSTATE_PROTO;
        }
#line 620
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP$SerialFrameComm$putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 622
            SerialP$txState = SerialP$TXSTATE_ERROR;
#line 622
            __nesc_atomic_end(__nesc_atomic); }
          SerialP$MaybeScheduleTx();
        }
    }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t SerialP$stopDoneTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(SerialP$stopDoneTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
inline static   error_t SerialP$RunTx$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(SerialP$RunTx);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 128 "OscilloscopeC.nc"
static inline  void OscilloscopeC$Read$readDone(error_t result, uint16_t data)
#line 128
{
  if (result != SUCCESS) 
    {
      data = 0xffff;
      OscilloscopeC$report_problem();
    }
  __nesc_hton_uint16((unsigned char *)&OscilloscopeC$local.readings[OscilloscopeC$reading++], data);
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  void /*OscilloscopeAppC.Sensor.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$readDone(error_t arg_0x7df91a28, /*OscilloscopeAppC.Sensor.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$val_t arg_0x7df91bb0){
#line 63
  OscilloscopeC$Read$readDone(arg_0x7df91a28, arg_0x7df91bb0);
#line 63
}
#line 63
# 37 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/ADC_ShiftM.nc"
static inline  void /*OscilloscopeAppC.Sensor.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$readDone(error_t result, uint16_t val)
#line 37
{
  /*OscilloscopeAppC.Sensor.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$readDone(result, val >> 6);
}

# 48 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline   void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(uint8_t client, error_t result, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$width_t data)
#line 48
{
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  void /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$readDone(uint8_t arg_0x7d7b8550, error_t arg_0x7df91a28, /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$val_t arg_0x7df91bb0){
#line 63
  switch (arg_0x7d7b8550) {
#line 63
    case /*OscilloscopeAppC.Sensor.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID:
#line 63
      /*OscilloscopeAppC.Sensor.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$readDone(arg_0x7df91a28, arg_0x7df91bb0);
#line 63
      break;
#line 63
    default:
#line 63
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$default$readDone(arg_0x7d7b8550, arg_0x7df91a28, arg_0x7df91bb0);
#line 63
      break;
#line 63
    }
#line 63
}
#line 63
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

# 200 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 200
{
}

# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x7d8334d8){
#line 55
  switch (arg_0x7d8334d8) {
#line 55
    case /*OscilloscopeAppC.Sensor.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$HAL_ID:
#line 55
      PhotoP$ResourceConfigure$unconfigure();
#line 55
      break;
#line 55
    default:
#line 55
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x7d8334d8);
#line 55
      break;
#line 55
    }
#line 55
}
#line 55
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
inline static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceController$granted(void){
#line 46
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$granted();
#line 46
}
#line 46
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
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
        if (i == 1U) {
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
inline static   resource_client_id_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$dequeue(void){
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
inline static   bool /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$isEmpty(void){
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
# 106 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$release(uint8_t id)
#line 106
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 107
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_BUSY && /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId == id) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$isEmpty() == FALSE) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$dequeue();
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_GRANTING;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$postTask();
            }
          else {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$CONTROLLER_ID;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED;
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceController$granted();
            }
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$unconfigure(id);
        }
    }
#line 121
    __nesc_atomic_end(__nesc_atomic); }
  return FAIL;
}

# 47 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline    error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(uint8_t client)
#line 47
{
#line 47
  return FAIL;
}

# 101 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$release(uint8_t arg_0x7d7b5188){
#line 101
  unsigned char result;
#line 101

#line 101
  switch (arg_0x7d7b5188) {
#line 101
    case /*OscilloscopeAppC.Sensor.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID:
#line 101
      result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$release(/*OscilloscopeAppC.Sensor.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$HAL_ID);
#line 101
      break;
#line 101
    default:
#line 101
      result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$release(arg_0x7d7b5188);
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
inline static  void AdcP$Read$readDone(uint8_t arg_0x7d7da7d8, error_t arg_0x7df91a28, AdcP$Read$val_t arg_0x7df91bb0){
#line 63
  /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$readDone(arg_0x7d7da7d8, arg_0x7df91a28, arg_0x7df91bb0);
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

#line 86
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
inline static  error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Service$read(uint8_t arg_0x7d7b63f8){
#line 55
  unsigned char result;
#line 55

#line 55
  result = AdcP$Read$read(arg_0x7d7b63f8);
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
static inline   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$default$granted(uint8_t id)
#line 184
{
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$granted(uint8_t arg_0x7d836948){
#line 92
  switch (arg_0x7d836948) {
#line 92
    case /*OscilloscopeAppC.Sensor.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$HAL_ID:
#line 92
      /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$granted(/*OscilloscopeAppC.Sensor.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID);
#line 92
      break;
#line 92
    default:
#line 92
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$default$granted(arg_0x7d836948);
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

# 198 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 198
{
}

# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x7d8334d8){
#line 49
  switch (arg_0x7d8334d8) {
#line 49
    case /*OscilloscopeAppC.Sensor.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$HAL_ID:
#line 49
      PhotoP$ResourceConfigure$configure();
#line 49
      break;
#line 49
    default:
#line 49
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$default$configure(arg_0x7d8334d8);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 172 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline  void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$runTask(void)
#line 172
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 173
    {
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId;
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_BUSY;
    }
#line 176
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceConfigure$configure(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId);
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$granted(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId);
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
  union __nesc_unnamed4346 {
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
inline static   void Atm128AdcP$HplAtm128Adc$setAdmux(Atm128Admux_t arg_0x7d8e1ec8){
#line 49
  HplAtm128AdcP$HplAtm128Adc$setAdmux(arg_0x7d8e1ec8);
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
inline static   bool AdcP$Atm128AdcSingle$getData(uint8_t arg_0x7d903a50, uint8_t arg_0x7d903be0, bool arg_0x7d903d80, uint8_t arg_0x7d903f10){
#line 61
  unsigned char result;
#line 61

#line 61
  result = Atm128AdcP$Atm128AdcSingle$getData(arg_0x7d903a50, arg_0x7d903be0, arg_0x7d903d80, arg_0x7d903f10);
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

# 137 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline    uint8_t AdcP$Atm128AdcConfig$default$getChannel(uint8_t c)
#line 137
{
  return ATM128_ADC_SNGL_GND;
}

# 25 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static   uint8_t AdcP$Atm128AdcConfig$getChannel(uint8_t arg_0x7d7d79c0){
#line 25
  unsigned char result;
#line 25

#line 25
  switch (arg_0x7d7d79c0) {
#line 25
    case /*OscilloscopeAppC.Sensor.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID:
#line 25
      result = PhotoP$Atm128AdcConfig$getChannel();
#line 25
      break;
#line 25
    default:
#line 25
      result = AdcP$Atm128AdcConfig$default$getChannel(arg_0x7d7d79c0);
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

# 141 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline    uint8_t AdcP$Atm128AdcConfig$default$getRefVoltage(uint8_t c)
#line 141
{
  return ATM128_ADC_VREF_OFF;
}

# 32 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static   uint8_t AdcP$Atm128AdcConfig$getRefVoltage(uint8_t arg_0x7d7d79c0){
#line 32
  unsigned char result;
#line 32

#line 32
  switch (arg_0x7d7d79c0) {
#line 32
    case /*OscilloscopeAppC.Sensor.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID:
#line 32
      result = PhotoP$Atm128AdcConfig$getRefVoltage();
#line 32
      break;
#line 32
    default:
#line 32
      result = AdcP$Atm128AdcConfig$default$getRefVoltage(arg_0x7d7d79c0);
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

# 145 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static inline    uint8_t AdcP$Atm128AdcConfig$default$getPrescaler(uint8_t c)
#line 145
{
  return ATM128_ADC_PRESCALE_2;
}

# 39 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128AdcConfig.nc"
inline static   uint8_t AdcP$Atm128AdcConfig$getPrescaler(uint8_t arg_0x7d7d79c0){
#line 39
  unsigned char result;
#line 39

#line 39
  switch (arg_0x7d7d79c0) {
#line 39
    case /*OscilloscopeAppC.Sensor.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID:
#line 39
      result = PhotoP$Atm128AdcConfig$getPrescaler();
#line 39
      break;
#line 39
    default:
#line 39
      result = AdcP$Atm128AdcConfig$default$getPrescaler(arg_0x7d7d79c0);
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

# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7db72e78, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7db70030){
#line 92
  /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$Alarm$startAt(arg_0x7db72e78, arg_0x7db70030);
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
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t arg_0x7dfa3238, uint32_t arg_0x7dfa33c8){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(arg_0x7dfa3238, arg_0x7dfa33c8);
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

# 125 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceController$release(void)
#line 125
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 126
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$CONTROLLER_ID) {
          if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_GRANTING) {
              /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$postTask();
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
            if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_IMM_GRANTING) {
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId;
                /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_BUSY;
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
  result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceController$release();
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
inline static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceController$requested(void){
#line 73
  /*Atm128AdcC.PM.PowerManager*/AsyncPowerManagerP$0$ResourceController$requested();
#line 73
}
#line 73
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
inline static   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x7d850af0){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$enqueue(arg_0x7d850af0);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 186 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline    void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(uint8_t id)
#line 186
{
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static   void /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(uint8_t arg_0x7d834308){
#line 43
    /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$default$requested(arg_0x7d834308);
#line 43
}
#line 43
# 75 "/opt/tinyos-2.x/tos/system/ArbiterP.nc"
static inline   error_t /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$request(uint8_t id)
#line 75
{
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceRequested$requested(/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 77
    {
      if (/*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state == /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_CONTROLLED) {
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$state = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$RES_GRANTING;
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$reqResId = id;
        }
      else {
          unsigned char __nesc_temp = 
#line 82
          /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Queue$enqueue(id);

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
  /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$ResourceController$requested();
  return SUCCESS;
}

# 44 "/opt/tinyos-2.x/tos/system/ArbitratedReadC.nc"
static inline    error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$request(uint8_t client)
#line 44
{
  return FAIL;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$request(uint8_t arg_0x7d7b5188){
#line 78
  unsigned char result;
#line 78

#line 78
  switch (arg_0x7d7b5188) {
#line 78
    case /*OscilloscopeAppC.Sensor.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID:
#line 78
      result = /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$Resource$request(/*OscilloscopeAppC.Sensor.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$HAL_ID);
#line 78
      break;
#line 78
    default:
#line 78
      result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Resource$default$request(arg_0x7d7b5188);
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
inline static  error_t /*OscilloscopeAppC.Sensor.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$read(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = /*WireAdcP.ArbitrateRead*/ArbitratedReadC$0$Read$read(/*OscilloscopeAppC.Sensor.DemoChannel.PhotoProC.AdcReadClientC*/AdcReadClientC$0$ID);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 33 "/opt/tinyos-2.x/tos/sensorboards/zigbex_sensor/ADC_ShiftM.nc"
static inline  error_t /*OscilloscopeAppC.Sensor.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$read(void)
#line 33
{
  return /*OscilloscopeAppC.Sensor.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$subRead$read();
}

# 55 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  error_t OscilloscopeC$Read$read(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = /*OscilloscopeAppC.Sensor.DemoChannel.ADC_ShiftM*/ADC_ShiftM$0$Read$read();
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 240 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_hton_uint8(void *target, uint8_t value)
#line 240
{
  uint8_t *base = target;

#line 242
  base[0] = value;
  return value;
}

# 509 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline   error_t SerialP$SendBytePacket$startSend(uint8_t b)
#line 509
{
  bool not_busy = FALSE;

#line 511
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 511
    {
      if (SerialP$txBuf[SerialP$TX_DATA_INDEX].state == SerialP$BUFFER_AVAILABLE) {
          SerialP$txBuf[SerialP$TX_DATA_INDEX].state = SerialP$BUFFER_FILLING;
          SerialP$txBuf[SerialP$TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 517
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP$MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 51 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$startSend(uint8_t arg_0x7d6d0c68){
#line 51
  unsigned char result;
#line 51

#line 51
  result = SerialP$SendBytePacket$startSend(arg_0x7d6d0c68);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 43 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline   uint8_t SerialPacketInfoActiveMessageP$Info$dataLinkLength(message_t *msg, uint8_t upperLen)
#line 43
{
  return upperLen + sizeof(serial_header_t );
}

# 344 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline    uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 345
{
  return 0;
}

# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(uart_id_t arg_0x7d64c620, message_t *arg_0x7d6f3120, uint8_t arg_0x7d6f32b0){
#line 23
  unsigned char result;
#line 23

#line 23
  switch (arg_0x7d64c620) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      result = SerialPacketInfoActiveMessageP$Info$dataLinkLength(arg_0x7d6f3120, arg_0x7d6f32b0);
#line 23
      break;
#line 23
    default:
#line 23
      result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$default$dataLinkLength(arg_0x7d64c620, arg_0x7d6f3120, arg_0x7d6f32b0);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return result;
#line 23
}
#line 23
# 100 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline  error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(uint8_t id, message_t *msg, uint8_t len)
#line 100
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE) {
      return EBUSY;
    }

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_DATA;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendId = id;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendCancelled = FALSE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 108
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(id);


      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex;
    }
#line 115
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SEND_STATE_IDLE;
      return FAIL;
    }
}

# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(message_t *arg_0x7d7365a0, uint8_t arg_0x7d736728){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$Send$send(TOS_SERIAL_ACTIVE_MESSAGE_ID, arg_0x7d7365a0, arg_0x7d736728);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 53 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline  error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(msg);

#line 57
  __nesc_hton_uint16((unsigned char *)&header->dest, dest);





  __nesc_hton_uint8((unsigned char *)&header->type, id);
  __nesc_hton_uint8((unsigned char *)&header->length, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$SubSend$send(msg, len);
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t OscilloscopeC$AMSend$send(am_addr_t arg_0x7dfe19a0, message_t *arg_0x7dfe1b50, uint8_t arg_0x7dfe1cd8){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$send(AM_OSCILLOSCOPE, arg_0x7dfe19a0, arg_0x7dfe1b50, arg_0x7dfe1cd8);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 48 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle(void)
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t *)59U ^= 1 << 1;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
}

# 31 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led1$toggle(void){
#line 31
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$toggle();
#line 31
}
#line 31
# 88 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led1Toggle(void)
#line 88
{
  LedsP$Led1$toggle();
  ;
#line 90
  ;
}

# 72 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void OscilloscopeC$Leds$led1Toggle(void){
#line 72
  LedsP$Leds$led1Toggle();
#line 72
}
#line 72
# 50 "OscilloscopeC.nc"
static inline void OscilloscopeC$report_sent(void)
#line 50
{
#line 50
  OscilloscopeC$Leds$led1Toggle();
}

# 110 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline  uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(message_t *msg)
#line 110
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$getHeader(msg);

#line 112
  return __nesc_ntoh_uint8((unsigned char *)&header->length);
}









static inline  void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(message_t *msg, uint8_t *len)
#line 123
{
  if (len != (void *)0) {
      *len = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$payloadLength(msg);
    }
  return msg->data;
}

#line 77
static inline  void */*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$getPayload(am_id_t id, message_t *m)
#line 77
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$getPayload(m, (void *)0);
}

# 125 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void *OscilloscopeC$AMSend$getPayload(message_t *arg_0x7dfd3b18){
#line 125
  void *result;
#line 125

#line 125
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$getPayload(AM_OSCILLOSCOPE, arg_0x7dfd3b18);
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 119 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline  uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength(void)
#line 119
{
  return 28;
}

#line 73
static inline  uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$maxPayloadLength(am_id_t id)
#line 73
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$Packet$maxPayloadLength();
}

# 112 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  uint8_t OscilloscopeC$AMSend$maxPayloadLength(void){
#line 112
  unsigned char result;
#line 112

#line 112
  result = /*SerialActiveMessageC.AM*/SerialActiveMessageP$0$AMSend$maxPayloadLength(AM_OSCILLOSCOPE);
#line 112

#line 112
  return result;
#line 112
}
#line 112
# 97 "OscilloscopeC.nc"
static inline  void OscilloscopeC$Timer$fired(void)
#line 97
{
  unsigned int __nesc_temp43;
  unsigned char *__nesc_temp42;

#line 98
  if (OscilloscopeC$reading == NREADINGS) 
    {
      if (!OscilloscopeC$sendbusy && sizeof OscilloscopeC$local <= OscilloscopeC$AMSend$maxPayloadLength()) 
        {
          memcpy(OscilloscopeC$AMSend$getPayload(&OscilloscopeC$sendbuf), &OscilloscopeC$local, sizeof OscilloscopeC$local);
          OscilloscopeC$report_sent();
          if (OscilloscopeC$AMSend$send(AM_BROADCAST_ADDR, &OscilloscopeC$sendbuf, sizeof OscilloscopeC$local) == SUCCESS) {
            OscilloscopeC$sendbusy = TRUE;
            }
        }
#line 107
      if (!OscilloscopeC$sendbusy) {
        OscilloscopeC$report_problem();
        }
      OscilloscopeC$reading = 0;


      if (!OscilloscopeC$suppress_count_change) {
        (__nesc_temp42 = (unsigned char *)&OscilloscopeC$local.count, __nesc_hton_uint16(__nesc_temp42, (__nesc_temp43 = __nesc_ntoh_uint16(__nesc_temp42)) + 1), __nesc_temp43);
        }
#line 115
      OscilloscopeC$suppress_count_change = FALSE;
    }
  if (OscilloscopeC$Read$read() != SUCCESS) {
    OscilloscopeC$report_problem();
    }
}

# 192 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x7d9c53a0){
#line 72
  switch (arg_0x7d9c53a0) {
#line 72
    case 0U:
#line 72
      OscilloscopeC$Timer$fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x7d9c53a0);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
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
inline static   void /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type arg_0x7db303d8){
#line 45
  HplAtm128Timer0AsyncC$Compare$set(arg_0x7db303d8);
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
inline static   void /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$startAt(/*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$size_type arg_0x7db72e78, /*AlarmCounterMilliP.Transform32*/TransformAlarmCounterC$0$AlarmFrom$size_type arg_0x7db70030){
#line 92
  /*AlarmCounterMilliP.MilliAlarm*/Atm128AlarmC$0$Alarm$startAt(arg_0x7db72e78, arg_0x7db70030);
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
inline static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$setScale(uint8_t arg_0x7db447e0){
#line 95
  HplAtm128Timer0AsyncC$Timer$setScale(arg_0x7db447e0);
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
inline static   void /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$set(/*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Timer$timer_size arg_0x7db50b70){
#line 58
  HplAtm128Timer0AsyncC$Timer$set(arg_0x7db50b70);
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

# 48 "/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static inline  error_t /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init(void)
#line 48
{
  memset(/*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ, 0, sizeof /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ);
  return SUCCESS;
}

# 213 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline void SerialP$ackInit(void)
#line 213
{
  SerialP$ackQ.writePtr = SerialP$ackQ.readPtr = 0;
}

#line 204
static __inline void SerialP$rxInit(void)
#line 204
{
  SerialP$rxBuf.writePtr = SerialP$rxBuf.readPtr = 0;
  SerialP$rxState = SerialP$RXSTATE_NOSYNC;
  SerialP$rxByteCnt = 0;
  SerialP$rxProto = 0;
  SerialP$rxSeqno = 0;
  SerialP$rxCRC = 0;
}

#line 192
static __inline void SerialP$txInit(void)
#line 192
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 194
  for (i = 0; i < SerialP$TX_BUFFER_COUNT; i++) SerialP$txBuf[i].state = SerialP$BUFFER_AVAILABLE;
  SerialP$txState = SerialP$TXSTATE_IDLE;
  SerialP$txByteCnt = 0;
  SerialP$txProto = 0;
  SerialP$txSeqno = 0;
  SerialP$txCRC = 0;
  SerialP$txPending = FALSE;
  SerialP$txIndex = 0;
}

#line 217
static inline  error_t SerialP$Init$init(void)
#line 217
{

  SerialP$txInit();
  SerialP$rxInit();
  SerialP$ackInit();

  return SUCCESS;
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline  error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init(void)
#line 61
{
  if (PLATFORM_BAUDRATE == 19200UL) {
    /*Atm128Uart0C.UartP*/Atm128UartP$0$m_byte_time = 200;
    }
  else {
#line 64
    if (PLATFORM_BAUDRATE == 57600UL) {
      /*Atm128Uart0C.UartP*/Atm128UartP$0$m_byte_time = 68;
      }
    }
#line 66
  return SUCCESS;
}

# 120 "/opt/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
static inline   uint16_t MeasureClockC$Atm128Calibrate$baudrateRegister(uint32_t baudrate)
#line 120
{

  return ((uint32_t )MeasureClockC$cycles << 12) / baudrate - 1;
}

# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static   uint16_t HplAtm128UartP$Atm128Calibrate$baudrateRegister(uint32_t arg_0x7dee3610){
#line 60
  unsigned int result;
#line 60

#line 60
  result = MeasureClockC$Atm128Calibrate$baudrateRegister(arg_0x7dee3610);
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
  result = ecombine(result, /*Atm128Uart0C.UartP*/Atm128UartP$0$Init$init());
#line 51
  result = ecombine(result, SerialP$Init$init());
#line 51
  result = ecombine(result, /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$Init$init());
#line 51
  result = ecombine(result, /*AlarmCounterMilliP.MilliInit*/Atm128TimerInitC$0$Init$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t SerialP$startDoneTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(SerialP$startDoneTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 329 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline  error_t SerialP$SplitControl$start(void)
#line 329
{
  SerialP$startDoneTask$postTask();
  return SUCCESS;
}

# 79 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  error_t OscilloscopeC$SerialControl$start(void){
#line 79
  unsigned char result;
#line 79

#line 79
  result = SerialP$SplitControl$start();
#line 79

#line 79
  return result;
#line 79
}
#line 79
# 53 "OscilloscopeC.nc"
static inline  void OscilloscopeC$Boot$booted(void)
#line 53
{
  __nesc_hton_uint16((unsigned char *)&OscilloscopeC$local.interval, DEFAULT_INTERVAL);
  __nesc_hton_uint16((unsigned char *)&OscilloscopeC$local.id, TOS_NODE_ID);
  if (OscilloscopeC$SerialControl$start() != SUCCESS) {
    OscilloscopeC$report_problem();
    }
}

# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
inline static  void RealMainP$Boot$booted(void){
#line 49
  OscilloscopeC$Boot$booted();
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
inline static   bool Atm128AdcP$Atm128AdcMultiple$dataReady(uint16_t arg_0x7d8f5bb0, bool arg_0x7d8f5d38, uint8_t arg_0x7d8f5ec0, uint8_t *arg_0x7d8f40a8, uint8_t *arg_0x7d8f4258){
#line 110
  unsigned char result;
#line 110

#line 110
  result = Atm128AdcP$Atm128AdcMultiple$default$dataReady(arg_0x7d8f5bb0, arg_0x7d8f5d38, arg_0x7d8f5ec0, arg_0x7d8f40a8, arg_0x7d8f4258);
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
inline static   void AdcP$ReadNow$readDone(uint8_t arg_0x7d7d9628, error_t arg_0x7d918b10, AdcP$ReadNow$val_t arg_0x7d918c98){
#line 65
    AdcP$ReadNow$default$readDone(arg_0x7d7d9628, arg_0x7d918b10, arg_0x7d918c98);
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
inline static   void Atm128AdcP$Atm128AdcSingle$dataReady(uint16_t arg_0x7d902920, bool arg_0x7d902aa8){
#line 72
  AdcP$Atm128AdcSingle$dataReady(arg_0x7d902920, arg_0x7d902aa8);
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
inline static   void HplAtm128AdcP$HplAtm128Adc$dataReady(uint16_t arg_0x7d8d4208){
#line 147
  Atm128AdcP$HplAtm128Adc$dataReady(arg_0x7d8d4208);
#line 147
}
#line 147
# 374 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline   void SerialP$SerialFrameComm$dataReceived(uint8_t data)
#line 374
{
  SerialP$rx_state_machine(FALSE, data);
}

# 83 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static   void HdlcTranslateC$SerialFrameComm$dataReceived(uint8_t arg_0x7d6c2350){
#line 83
  SerialP$SerialFrameComm$dataReceived(arg_0x7d6c2350);
#line 83
}
#line 83
# 371 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline   void SerialP$SerialFrameComm$delimiterReceived(void)
#line 371
{
  SerialP$rx_state_machine(TRUE, 0);
}

# 74 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static   void HdlcTranslateC$SerialFrameComm$delimiterReceived(void){
#line 74
  SerialP$SerialFrameComm$delimiterReceived();
#line 74
}
#line 74
# 61 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline   void HdlcTranslateC$UartStream$receivedByte(uint8_t data)
#line 61
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC$SerialFrameComm$delimiterReceived();
      return;
    }
  else {
#line 73
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC$state.receiveEscape = 1;
        return;
      }
    else {
#line 78
      if (HdlcTranslateC$state.receiveEscape) {

          HdlcTranslateC$state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 83
  HdlcTranslateC$SerialFrameComm$dataReceived(data);
}

# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receivedByte(uint8_t arg_0x7d600010){
#line 79
  HdlcTranslateC$UartStream$receivedByte(arg_0x7d600010);
#line 79
}
#line 79
# 116 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline   void HdlcTranslateC$UartStream$receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 116
{
}

# 99 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receiveDone(uint8_t *arg_0x7d600ce0, uint16_t arg_0x7d600e70, error_t arg_0x7d5fc010){
#line 99
  HdlcTranslateC$UartStream$receiveDone(arg_0x7d600ce0, arg_0x7d600e70, arg_0x7d5fc010);
#line 99
}
#line 99
# 107 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(uint8_t data)
#line 107
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf) {
      /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf[/*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_pos++] = data;
      if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_pos >= /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_len) {
          uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf;

#line 113
          /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_buf = (void *)0;
          /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receiveDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP$0$m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$receivedByte(data);
    }
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   void HplAtm128UartP$HplUart0$rxDone(uint8_t arg_0x7d5d4b30){
#line 49
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$rxDone(arg_0x7d5d4b30);
#line 49
}
#line 49
# 378 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline bool SerialP$valid_rx_proto(uint8_t proto)
#line 378
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        return TRUE;
      case SERIAL_PROTO_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          default: 
            return FALSE;
    }
}

# 189 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$lockCurrentBuffer(void)
#line 189
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufZeroLocked = 1;
    }
}

#line 185
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$isCurrentBufferLocked(void)
#line 185
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufZeroLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.bufOneLocked;
}

#line 212
static inline   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket(void)
#line 212
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 214
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 51 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static   error_t SerialP$ReceiveBytePacket$startPacket(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$startPacket();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 308 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP$rx_current_crc(void)
#line 308
{
  uint16_t crc;
  uint8_t tmp = SerialP$rxBuf.writePtr;

#line 311
  tmp = tmp == 0 ? SerialP$RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP$rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP$RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP$rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 69 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static   void SerialP$ReceiveBytePacket$endPacket(error_t arg_0x7d6c7270){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(arg_0x7d6c7270);
#line 69
}
#line 69
# 207 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBufferSwap(void)
#line 207
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which];
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 231 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP$ack_queue_is_full(void)
#line 231
{
  uint8_t tmp;
#line 232
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 233
  {
    tmp = SerialP$ackQ.writePtr;
    tmp2 = SerialP$ackQ.readPtr;
  }
  if (++tmp > SerialP$ACK_QUEUE_SIZE) {
#line 237
    tmp = 0;
    }
#line 238
  return tmp == tmp2;
}







static __inline void SerialP$ack_queue_push(uint8_t token)
#line 247
{
  if (!SerialP$ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 249
      {
        SerialP$ackQ.buf[SerialP$ackQ.writePtr] = token;
        if (++ SerialP$ackQ.writePtr > SerialP$ACK_QUEUE_SIZE) {
#line 251
          SerialP$ackQ.writePtr = 0;
          }
      }
#line 253
      SerialP$MaybeScheduleTx();
    }
}

# 230 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(uint8_t b)
#line 230
{
  /* atomic removed: atomic calls only */
#line 231
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$PacketInfo$offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_IDLE: 
          default: 
#line 252
            ;
      }
  }
}

# 58 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static   void SerialP$ReceiveBytePacket$byteReceived(uint8_t arg_0x7d6c8c70){
#line 58
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$byteReceived(arg_0x7d6c8c70);
#line 58
}
#line 58
# 298 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP$rx_buffer_top(void)
#line 298
{
  uint8_t tmp = SerialP$rxBuf.buf[SerialP$rxBuf.readPtr];

#line 300
  return tmp;
}

#line 302
static __inline uint8_t SerialP$rx_buffer_pop(void)
#line 302
{
  uint8_t tmp = SerialP$rxBuf.buf[SerialP$rxBuf.readPtr];

#line 304
  if (++ SerialP$rxBuf.readPtr > SerialP$RX_DATA_BUFFER_SIZE) {
#line 304
    SerialP$rxBuf.readPtr = 0;
    }
#line 305
  return tmp;
}

#line 294
static __inline void SerialP$rx_buffer_push(uint8_t data)
#line 294
{
  SerialP$rxBuf.buf[SerialP$rxBuf.writePtr] = data;
  if (++ SerialP$rxBuf.writePtr > SerialP$RX_DATA_BUFFER_SIZE) {
#line 296
    SerialP$rxBuf.writePtr = 0;
    }
}

# 55 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline   void HdlcTranslateC$SerialFrameComm$resetReceive(void)
#line 55
{
  HdlcTranslateC$state.receiveEscape = 0;
}

# 68 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static   void SerialP$SerialFrameComm$resetReceive(void){
#line 68
  HdlcTranslateC$SerialFrameComm$resetReceive();
#line 68
}
#line 68
#line 54
inline static   error_t SerialP$SerialFrameComm$putData(uint8_t arg_0x7d6c4118){
#line 54
  unsigned char result;
#line 54

#line 54
  result = HdlcTranslateC$SerialFrameComm$putData(arg_0x7d6c4118);
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 500 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline   error_t SerialP$SendBytePacket$completeSend(void)
#line 500
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 502
  {
    SerialP$txBuf[SerialP$TX_DATA_INDEX].state = SerialP$BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 60 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static   error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$completeSend(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = SerialP$SendBytePacket$completeSend();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 164 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline   uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte(void)
#line 164
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 167
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 70 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static   uint8_t SerialP$SendBytePacket$nextByte(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$SendBytePacket$nextByte();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 629 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline   void SerialP$SerialFrameComm$putDone(void)
#line 629
{
  {
    error_t txResult = SUCCESS;

    switch (SerialP$txState) {

        case SerialP$TXSTATE_PROTO: 

          txResult = SerialP$SerialFrameComm$putData(SerialP$txProto);

        SerialP$txState = SerialP$TXSTATE_INFO;



        SerialP$txCRC = crcByte(SerialP$txCRC, SerialP$txProto);
        break;

        case SerialP$TXSTATE_SEQNO: 
          txResult = SerialP$SerialFrameComm$putData(SerialP$txSeqno);
        SerialP$txState = SerialP$TXSTATE_INFO;
        SerialP$txCRC = crcByte(SerialP$txCRC, SerialP$txSeqno);
        break;

        case SerialP$TXSTATE_INFO: 
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 653
            {
              txResult = SerialP$SerialFrameComm$putData(SerialP$txBuf[SerialP$txIndex].buf);
              SerialP$txCRC = crcByte(SerialP$txCRC, SerialP$txBuf[SerialP$txIndex].buf);
              ++SerialP$txByteCnt;

              if (SerialP$txIndex == SerialP$TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 660
                  nextByte = SerialP$SendBytePacket$nextByte();
                  if (SerialP$txBuf[SerialP$txIndex].state == SerialP$BUFFER_COMPLETE || SerialP$txByteCnt >= SerialP$SERIAL_MTU) {
                      SerialP$txState = SerialP$TXSTATE_FCS1;
                    }
                  else {
                      SerialP$txBuf[SerialP$txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP$txState = SerialP$TXSTATE_FCS1;
                }
            }
#line 671
            __nesc_atomic_end(__nesc_atomic); }
        break;

        case SerialP$TXSTATE_FCS1: 
          txResult = SerialP$SerialFrameComm$putData(SerialP$txCRC & 0xff);
        SerialP$txState = SerialP$TXSTATE_FCS2;
        break;

        case SerialP$TXSTATE_FCS2: 
          txResult = SerialP$SerialFrameComm$putData((SerialP$txCRC >> 8) & 0xff);
        SerialP$txState = SerialP$TXSTATE_ENDFLAG;
        break;

        case SerialP$TXSTATE_ENDFLAG: 
          txResult = SerialP$SerialFrameComm$putDelimiter();
        SerialP$txState = SerialP$TXSTATE_ENDWAIT;
        break;

        case SerialP$TXSTATE_ENDWAIT: 
          SerialP$txState = SerialP$TXSTATE_FINISH;
        case SerialP$TXSTATE_FINISH: 
          SerialP$MaybeScheduleTx();
        break;
        case SerialP$TXSTATE_ERROR: 
          default: 
            txResult = FAIL;
        break;
      }

    if (txResult != SUCCESS) {
        SerialP$txState = SerialP$TXSTATE_ERROR;
        SerialP$MaybeScheduleTx();
      }
  }
}

# 89 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static   void HdlcTranslateC$SerialFrameComm$putDone(void){
#line 89
  SerialP$SerialFrameComm$putDone();
#line 89
}
#line 89
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static   error_t HdlcTranslateC$UartStream$send(uint8_t *arg_0x7d602770, uint16_t arg_0x7d602900){
#line 48
  unsigned char result;
#line 48

#line 48
  result = /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(arg_0x7d602770, arg_0x7d602900);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 104 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline   void HdlcTranslateC$UartStream$sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 105
{
  if (HdlcTranslateC$state.sendEscape) {
      HdlcTranslateC$state.sendEscape = 0;
      HdlcTranslateC$m_data = HdlcTranslateC$txTemp;
      HdlcTranslateC$UartStream$send(&HdlcTranslateC$m_data, 1);
    }
  else {
      HdlcTranslateC$SerialFrameComm$putDone();
    }
}

# 57 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$sendDone(uint8_t *arg_0x7d602f08, uint16_t arg_0x7d6010b0, error_t arg_0x7d601238){
#line 57
  HdlcTranslateC$UartStream$sendDone(arg_0x7d602f08, arg_0x7d6010b0, arg_0x7d601238);
#line 57
}
#line 57
# 46 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(uint8_t arg_0x7d5d4068){
#line 46
  HplAtm128UartP$HplUart0$tx(arg_0x7d5d4068);
#line 46
}
#line 46
# 139 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline   void /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone(void)
#line 139
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos < /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_len) {
      /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf[/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf;

#line 146
      /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf = (void *)0;
      /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$sendDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_len, SUCCESS);
    }
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   void HplAtm128UartP$HplUart0$txDone(void){
#line 47
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$txDone();
#line 47
}
#line 47
# 283 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline    void HplAtm128UartP$HplUart1$default$rxDone(uint8_t data)
#line 283
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   void HplAtm128UartP$HplUart1$rxDone(uint8_t arg_0x7d5d4b30){
#line 49
  HplAtm128UartP$HplUart1$default$rxDone(arg_0x7d5d4b30);
#line 49
}
#line 49
# 282 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline    void HplAtm128UartP$HplUart1$default$txDone(void)
#line 282
{
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static   void HplAtm128UartP$HplUart1$txDone(void){
#line 47
  HplAtm128UartP$HplUart1$default$txDone();
#line 47
}
#line 47
# 188 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline    void HplAtm128Timer3P$CompareA$default$fired(void)
#line 188
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm128Timer3P$CompareA$fired(void){
#line 49
  HplAtm128Timer3P$CompareA$default$fired();
#line 49
}
#line 49
# 192 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline    void HplAtm128Timer3P$CompareB$default$fired(void)
#line 192
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm128Timer3P$CompareB$fired(void){
#line 49
  HplAtm128Timer3P$CompareB$default$fired();
#line 49
}
#line 49
# 196 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline    void HplAtm128Timer3P$CompareC$default$fired(void)
#line 196
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm128Timer3P$CompareC$fired(void){
#line 49
  HplAtm128Timer3P$CompareC$default$fired();
#line 49
}
#line 49
# 200 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline    void HplAtm128Timer3P$Capture$default$captured(uint16_t time)
#line 200
{
}

# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void HplAtm128Timer3P$Capture$captured(HplAtm128Timer3P$Capture$size_type arg_0x7d545120){
#line 51
  HplAtm128Timer3P$Capture$default$captured(arg_0x7d545120);
#line 51
}
#line 51
# 47 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline   uint16_t HplAtm128Timer3P$Timer$get(void)
#line 47
{
#line 47
  return * (volatile uint16_t *)0x88;
}

# 174 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline   void /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow(void)
#line 174
{
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*CounterMicro32C.Transform32*/TransformCounterC$0$Counter$overflow(void){
#line 71
  /*Atm128Uart0C.UartP*/Atm128UartP$0$Counter$overflow();
#line 71
}
#line 71
# 122 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline   void /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMicro32C.Transform32*/TransformCounterC$0$m_upper++;
      if ((/*CounterMicro32C.Transform32*/TransformCounterC$0$m_upper & /*CounterMicro32C.Transform32*/TransformCounterC$0$OVERFLOW_MASK) == 0) {
        /*CounterMicro32C.Transform32*/TransformCounterC$0$Counter$overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*CounterThree16C.NCounter*/Atm128CounterC$1$Counter$overflow(void){
#line 71
  /*CounterMicro32C.Transform32*/TransformCounterC$0$CounterFrom$overflow();
#line 71
}
#line 71
# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   void /*CounterThree16C.NCounter*/Atm128CounterC$1$Timer$overflow(void)
{
  /*CounterThree16C.NCounter*/Atm128CounterC$1$Counter$overflow();
}

# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline   void /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$overflow(void)
#line 51
{
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void HplAtm128Timer3P$Timer$overflow(void){
#line 61
  /*InitThreeP.InitThree*/Atm128TimerInitC$1$Timer$overflow();
#line 61
  /*CounterThree16C.NCounter*/Atm128CounterC$1$Timer$overflow();
#line 61
}
#line 61
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
static  void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x7e162030){
#line 64
  switch (arg_0x7e162030) {
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
    case /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask:
#line 64
      /*Atm128AdcC.AdcArbiter.Arbiter*/ArbiterP$0$grantedTask$runTask();
#line 64
      break;
#line 64
    case AdcP$acquiredData:
#line 64
      AdcP$acquiredData$runTask();
#line 64
      break;
#line 64
    case SerialP$RunTx:
#line 64
      SerialP$RunTx$runTask();
#line 64
      break;
#line 64
    case SerialP$startDoneTask:
#line 64
      SerialP$startDoneTask$runTask();
#line 64
      break;
#line 64
    case SerialP$stopDoneTask:
#line 64
      SerialP$stopDoneTask$runTask();
#line 64
      break;
#line 64
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone:
#line 64
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$signalSendDone$runTask();
#line 64
      break;
#line 64
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask:
#line 64
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SchedulerBasicP$TaskBasic$default$runTask(arg_0x7e162030);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 48 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$toggle(void)
#line 48
{
#line 48
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 48
    * (volatile uint8_t *)59U ^= 1 << 2;
#line 48
    __nesc_atomic_end(__nesc_atomic); }
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

# 334 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP$testOff(void)
#line 334
{
  bool turnOff = FALSE;

#line 336
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 336
    {
      if (SerialP$txState == SerialP$TXSTATE_INACTIVE && 
      SerialP$rxState == SerialP$RXSTATE_INACTIVE) {
          turnOff = TRUE;
        }
    }
#line 341
    __nesc_atomic_end(__nesc_atomic); }
  if (turnOff) {
      SerialP$stopDoneTask$postTask();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 344
        SerialP$offPending = FALSE;
#line 344
        __nesc_atomic_end(__nesc_atomic); }
    }
  else {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 347
        SerialP$offPending = TRUE;
#line 347
        __nesc_atomic_end(__nesc_atomic); }
    }
}

# 86 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static   error_t HdlcTranslateC$SerialFrameComm$putDelimiter(void)
#line 86
{
  HdlcTranslateC$state.sendEscape = 0;
  HdlcTranslateC$m_data = HDLC_FLAG_BYTE;
  return HdlcTranslateC$UartStream$send(&HdlcTranslateC$m_data, 1);
}

# 123 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static   error_t /*Atm128Uart0C.UartP*/Atm128UartP$0$UartStream$send(uint8_t *buf, uint16_t len)
#line 123
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 127
    if (/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf) {
      return EBUSY;
      }
    }
#line 130
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_buf = buf;
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_len = len;
  /*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP$0$HplUart$tx(buf[/*Atm128Uart0C.UartP*/Atm128UartP$0$m_tx_pos++]);

  return SUCCESS;
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

# 489 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP$MaybeScheduleTx(void)
#line 489
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 490
    {
      if (SerialP$txPending == 0) {
          if (SerialP$RunTx$postTask() == SUCCESS) {
              SerialP$txPending = 1;
            }
        }
    }
#line 496
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/opt/tinyos-2.x/tos/system/RoundRobinResourceQueueC.nc"
static   bool /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$RoundRobinQueue$isEnqueued(resource_client_id_t id)
#line 62
{
  return /*Atm128AdcC.AdcArbiter.Queue*/RoundRobinResourceQueueC$0$resQ[id / 8] & (1 << id % 8);
}

# 82 "/opt/tinyos-2.x/tos/chips/atm128/adc/AdcP.nc"
static void AdcP$sample(void)
#line 82
{
  AdcP$Atm128AdcSingle$getData(AdcP$channel(), AdcP$refVoltage(), TRUE, AdcP$prescaler());
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

# 389 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP$rx_state_machine(bool isDelimeter, uint8_t data)
#line 389
{

  switch (SerialP$rxState) {

      case SerialP$RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP$rxInit();
            SerialP$rxState = SerialP$RXSTATE_PROTO;
          }
      break;

      case SerialP$RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP$rxCRC = crcByte(SerialP$rxCRC, data);
            SerialP$rxState = SerialP$RXSTATE_TOKEN;
            SerialP$rxProto = data;
            if (!SerialP$valid_rx_proto(SerialP$rxProto)) {
              goto nosync;
              }
            if (SerialP$rxProto != SERIAL_PROTO_PACKET_ACK) {
                goto nosync;
              }
            if (SerialP$ReceiveBytePacket$startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP$RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP$rxSeqno = data;
            SerialP$rxCRC = crcByte(SerialP$rxCRC, SerialP$rxSeqno);
            SerialP$rxState = SerialP$RXSTATE_INFO;
          }
      break;

      case SerialP$RXSTATE_INFO: 
        if (SerialP$rxByteCnt < SerialP$SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP$rxByteCnt >= 2) {
                    if (SerialP$rx_current_crc() == SerialP$rxCRC) {
                        SerialP$ReceiveBytePacket$endPacket(SUCCESS);
                        SerialP$ack_queue_push(SerialP$rxSeqno);
                        goto nosync;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP$rxByteCnt >= 2) {
                    SerialP$ReceiveBytePacket$byteReceived(SerialP$rx_buffer_top());
                    SerialP$rxCRC = crcByte(SerialP$rxCRC, SerialP$rx_buffer_pop());
                  }
                SerialP$rx_buffer_push(data);
                SerialP$rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP$rxInit();
  SerialP$SerialFrameComm$resetReceive();
  SerialP$ReceiveBytePacket$endPacket(FAIL);
  if (SerialP$offPending) {
      SerialP$rxState = SerialP$RXSTATE_INACTIVE;
      SerialP$testOff();
    }
  else {
    if (isDelimeter) {
        SerialP$rxState = SerialP$RXSTATE_PROTO;
      }
    }
  done: ;
}

# 81 "/opt/tinyos-2.x/tos/chips/atm128/crc.h"
static __attribute((noinline)) uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 282 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static   void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$ReceiveBytePacket$endPacket(error_t result)
#line 282
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 284
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$RECV_STATE_IDLE;
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP$0$receiveTask$postTask();
    }
}

# 180 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_20(void)
#line 180
{
  HplAtm128UartP$HplUart0$txDone();
}

# 92 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static   error_t HdlcTranslateC$SerialFrameComm$putData(uint8_t data)
#line 92
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC$state.sendEscape = 1;
      HdlcTranslateC$txTemp = data ^ 0x20;
      HdlcTranslateC$m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC$m_data = data;
    }
  return HdlcTranslateC$UartStream$send(&HdlcTranslateC$m_data, 1);
}

# 271 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
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

# 189 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
__attribute((interrupt))   void __vector_26(void)
#line 189
{
  HplAtm128Timer3P$CompareA$fired();
}

__attribute((interrupt))   void __vector_27(void)
#line 193
{
  HplAtm128Timer3P$CompareB$fired();
}

__attribute((interrupt))   void __vector_28(void)
#line 197
{
  HplAtm128Timer3P$CompareC$fired();
}

__attribute((interrupt))   void __vector_25(void)
#line 201
{
  HplAtm128Timer3P$Capture$captured(HplAtm128Timer3P$Timer$get());
}

__attribute((interrupt))   void __vector_29(void)
#line 205
{
  HplAtm128Timer3P$Timer$overflow();
}

