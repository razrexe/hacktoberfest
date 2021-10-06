import React from 'react';
import { render, screen } from '@testing-library/react';
import App from './App';

test('renders URL Shortener', () => {
  render(<App />);
  const titleElement = screen.getByText(/URL Shortener/)
  const buttonElement = screen.getByText(/Shorten URL/)
  expect(titleElement).toBeInTheDocument();
  expect(buttonElement).toBeInTheDocument();
});
