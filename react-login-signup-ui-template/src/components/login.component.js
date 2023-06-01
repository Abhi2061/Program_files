import React, { Component } from 'react'
export default class Login extends Component {
  render() {
    return (
      <form>
        <h3>Sign In</h3>

        <div>
          <label>Username</label>
          <input
            type="email"
            className="form-control"
            placeholder="Enter email"/>
        </div>

        <div>
          <label>Password</label>
          <input
            type="password"
            className="form-control"
            placeholder="Enter password"/>
        </div>
    
        <button type="submit" className="btn btn-primary">
          Submit
        </button>

        </form>
    )
  }
}