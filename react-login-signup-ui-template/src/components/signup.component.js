import React, { Component } from 'react'
export default class SignUp extends Component {
  render() {
    return (
      <form>
        <h3>Sign Up</h3>

        <div >
          <label>First name</label>
          <input
            type="text"
            className="form-control"
            placeholder="First name"/>
        </div>

        <div >
          <label>Last name</label>
          <input type="text" className="form-control" placeholder="Last name"/>
        </div>

        <div >

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
          Sign Up
        </button>
        
      </form>
    )
  }
}