import React from 'react';
import { View, Text, Image, ScrollView, TextInput, Button } from 'react-native';
import ButtonBasics from './ ButtonBasics';
import Textt from './Textt';

const App = () => {
  return (
    <ScrollView>
     
      <View >
        <Text  style={{ margin:20, padding:20}}>Hii This is my first react native app</Text>
        <Image
          source={{
            uri: 'https://reactnative.dev/docs/assets/p_cat2.png',
          }}
          style={{ width: 200, height: 200 }}
        
        />
      </View>
      <Textt />
     
       < ButtonBasics / >
      
    </ScrollView>
   
  );
}

export default App;