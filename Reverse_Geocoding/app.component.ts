import { Component } from '@angular/core';
import { HttpClient } from '@angular/common/http';
import {map}  from 'rxjs/operators';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
  title = 'reverseGeocoding';

  lat: number;
  lon: number;
  constructor (
    private http: HttpClient
  ) 
  { }

  getAddressRequest(latitude: number, longitude: number) {
    return this.http.get(`https://nominatim.openstreetmap.org/reverse?format=geojson&lat=${latitude}&lon=${longitude}`).pipe(map((data:any)=>{
      return data.features[0].properties.address;
    }));
  }

  getAddress() {
    this.getAddressRequest(this.lat, this.lon).subscribe((response: any) => {
      if (!response.error) {
        let address = response;
        console.log(address)
      }
    })

  }
}
