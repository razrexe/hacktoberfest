import React, { useState } from 'react';
import { Text, TextInput, View } from 'react-native';

const Textt = () => {
  const [text, setText] = useState('');
  return (
    <View style={{padding: 10}}>
      <TextInput
        style={{height: 40 ,borderColor: 'gray',
          borderWidth: 1}}
        placeholder="Type here to translate!"
        onChangeText={text => setText(text)}
        defaultValue={text}
       
      />
      <Text style={{padding: 10, fontSize: 42}}>
        {text}
      </Text>
    </View>
  );
}

export default Textt;