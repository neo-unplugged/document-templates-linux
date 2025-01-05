import React from 'react';
import ReactDOM from 'react-dom/client';

const App = () => (
    <div>
        <h1>Hello, React!</h1>
        <p>Welcome to your new React project.</p>
    </div>
);

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(<App />);

