configuration BlinkTimer {
}
module BlinkTimerM{
    uses{
        interface LedsExtend;
    }
}
implementation {
    void SetLEDWithNumber(int number)
    {
        int number[2]; // 2자리까지 지원
        number[0] = number % 10;
        number[1] = (number % 100)/10; //일반화는 구현후 하기로 한다.
        int i;

        for(i=1;i<=2;i++)
        {
        //Phase 1 : 자릿수에 따라 Red를 깜빡인다.
        LedsExtend.setRedBlink(i);
        wait(500);
        //Phase 2 : 5 이상이면 Green가 점등된다.
        if(number[i]/5 > 0) LedsExtend.setGreenOn();
        //Phase 3 : Yello가 0~4만큼 깜빡인다.
        LedsExtend.setYelloBlink(numbers[i]%5);
        wait(500);
        //Phase 4 : 0.5초만큼 대기 후 초기화한다.
        wait(500);
        LedsExtend.allOff();
        }
    }
}