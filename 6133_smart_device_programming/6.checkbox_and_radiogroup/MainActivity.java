package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    CheckBox cb1,cb2,cb3;
    RadioGroup rg1;
    RadioButton rb1;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        cb1 = findViewById(R.id.checkBox);
        cb2 = findViewById(R.id.checkBox2);
        cb3 = findViewById(R.id.checkBox3);
        rg1 = findViewById(R.id.radioGroup);
    }
    public void submitForm(View v){
        String tech = "";
        if(cb1.isChecked()){
            tech = tech + cb1.getText().toString();
        }
        if(cb2.isChecked()){
            tech = tech + cb2.getText().toString();
        }
        if(cb3.isChecked()){
            tech = tech + cb3.getText().toString();
        }
        int sid = rg1.getCheckedRadioButtonId();
        rb1 = findViewById(sid);
        tech = tech + rb1.getText().toString();
        Toast.makeText(getApplicationContext(),tech,Toast.LENGTH_SHORT).show();
    }

}