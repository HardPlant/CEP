        //*
        sendData.temp = temp;
        sendData.humid = humid;
        sendData.ur = ur;
        sendData.priority++;
        /*/
        localData.temp = temp;
        localData.humid = humid;
        localData.ur = ur; // sensor_data_t = uint16_t ((byte reverse))
        call LCDSetter.setLCDDevicePriorty(localData.priority);
        localData.priority++;
        //*/