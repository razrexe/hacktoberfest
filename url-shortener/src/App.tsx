import axios from 'axios';
import {ChangeEvent, FormEvent, useState} from 'react';

interface Data{
  id:number
  link:string
}

function App() {

  const [shortURL, setShortURL] = useState<string>('');
  const [URL, setURL] = useState<string>('');

  const postURL = async () => {
    await axios.post('https://api-ssl.bitly.com/v4/shorten', {
      long_url: URL
    }, {
      headers: {
        'Authorization': `Bearer ${process.env.REACT_APP_API_KEY}`
      }
    })
    .then(res => {
      //@ts-expect-error
      const short:Data = res.data;
      setShortURL(short.link)
    })
    .catch(err => {
      console.log(err)
    })
  }

  const handleSubmit = (e:FormEvent<HTMLFormElement>) =>{ 
    e.preventDefault()
    postURL()
    e.currentTarget.reset();
  }

  const handleCopy = () => {
    navigator.clipboard.writeText(shortURL)
  }

  const handleChange = (e:ChangeEvent<HTMLInputElement>) => {
    setURL(e.target.value)
  }

  return (
    <main className="container vh-100 d-flex flex-column align-items-center justify-content-center">
      <form className="w-100 text-center" onSubmit={handleSubmit}>
        <label htmlFor="url" className="label" aria-label="label-text">
            <h1 aria-label="label-text">URL Shortener</h1>
        </label>
        <div className="input-group input-group-lg w-100" aria-label="input container">
            <input type="url" name="url" aria-label="url" required placeholder="Enter URL to Shorten" className="form-control" value={URL} onChange={handleChange}/>
            <button type="submit" className="btn btn-primary" aria-label="submit">Shorten URL</button>
        </div>
      </form> 

      <section className="mt-4 w-100">
        <div className="input-group input-group-lg w-100" aria-label="input container">
          <input type="url" name="shortened-url" aria-label="shortened-url" disabled placeholder="Shortened URL" className="form-control" value={shortURL}/>
          <button type="submit" className="btn btn-secondary " aria-label="submit" onClick={() => handleCopy()}>Copy To Clipboard</button>
        </div>
      </section>
    </main>
  );
}

export default App;
